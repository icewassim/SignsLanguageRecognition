#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace cv;
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
   // Array of the pattern alphabets 
    stopCapture=true;
    alphabetTable[0]="A.jpg";
    alphabetTable[1]="B.jpg";
    alphabetTable[2]="C.jpg";
    alphabetTable[3]="D.jpg";
    alphabetTable[4]="E.jpg";
    alphabetTable[5]="F.jpg";
    couleur=cvScalaCvRect MainWindow::detecter_pos_main(IplImage * src_image)r(0x00,0x00,0xff);
    showGray=false;
    startmatching=false;
    timer1=new QTimer(this);
    connect(timer1,SIGNAL(timeout()),this,SLOT(stopped_timer()));
    ui->setupUi(this);
}

//Start capture function 
void MainWindow::Capture(){
    float matchresult=1;
    p_capWebcam = cvCaptureFromCAM(0);
    cvNamedWindow("Original", CV_WINDOW_AUTOSIZE);
    IplImage * tableauxImage[6];
    
    for(int i=0;i<6;i++)
        {
            tableauxImage[i]=cvLoadImage(alphabetTable[i], CV_LOAD_IMAGE_GRAYSCALE );
        }

    while(1){
        p_imgOriginal = cvQueryFrame(p_capWebcam);
        p_gray= cvCreateImage( cvGetSize(p_imgOriginal), 8, 1 );
        cvFlip(p_imgOriginal,p_imgOriginal,1);
        cvCvtColor(p_imgOriginal,p_gray,CV_BGR2GRAY);
        cvSetImageROI(p_gray,cvRect(100,100,200,200));
        cvThreshold(p_gray,p_gray,100,255, CV_THRESH_BINARY_INV);
        MainWindow::draw_box(p_imgOriginal,cvRect(100,100,200,200));

        // when show Roi Button is clicked
        if(showGray==true) {
            cvNamedWindow("template gray", CV_WINDOW_AUTOSIZE);
            cvShowImage("template gray",p_gray);
         }
         
        cvShowImage("Original", p_imgOriginal);
        for(int i=0;i<6;i++){
            if(startmatching==true) 
                matchresult=MainWindow::match_two_shapes(tableauxImage[i],p_gray);
                
            if(matchresult<0.1){
                    ui->signname->setText(QString(convertstring(alphabetTable[i])[0])); //good match
                    timer1->start(1000);
                }
                
            else {
               if (matchresult<0.25) 
                 couleur=cvScalar(0x00,0xff,0x00);
               else
                 couleur=cvScalar(0x00,0x00,0xff);
            }
            ui->matchresultlabel->setText(QString::number(matchresult));
        }
        charCheckForEscKey = cvWaitKey(ui->Delais->value());// delay (in ms), and get key press, if any
        if((charCheckForEscKey == 27)||(stopCapture)) 
            break;
    }
    
    for(int i = 0;i < 6;i++)
    {
        cvReleaseImage(&tableauxImage[i]);
    }
    cvReleaseCapture(&p_capWebcam);
    cvDestroyAllWindows();
}

MainWindow::~MainWindow()
{
   cvDestroyAllWindows();
   delete ui;
}

// start capture clicked
void MainWindow::on_pushButton_clicked() 
{
    stopCapture=!stopCapture;
    if(stopCapture) {
        ui->pushButton->setText(QString("Start Capture"));
        ui->pushButton_2->setEnabled(false);
        ui->imageboxname->setEnabled(false);
        ui->template_buttom->setEnabled(false);
        ui->compareButtom->setEnabled(false);
    }
    else
    {
        ui->compareButtom->setEnabled(true);
        ui->pushButton->setText(QString("Stop Capture"));
        ui->pushButton_2->setEnabled(true);
        ui->imageboxname->setEnabled(true);
        ui->template_buttom->setEnabled(true);
        MainWindow::Capture();
    }

}

void MainWindow::on_pushButton_2_clicked() //boutton enregistrer Frame
{
    String nom_image = ui->imageboxname->text().toStdString();
    cvSaveImage("template2.jpg",p_gray);
    ui->imageboxname->setText("");
}

void MainWindow::on_template_buttom_clicked()
{
    showGray=true;
}

void MainWindow::on_Findcontourbuttom_clicked()
{
   //TODO FindCountour button
}

void MainWindow::on_compareButtom_clicked()
{
    startmatching=true;
}

/**
 * matching two contours extracted from two shapes
 * @param {IpImage} image1
 * @param {IpImage} image12
 * 
*/
float MainWindow::match_two_shapes(IplImage* image1,IplImage * image2)
{
    double matchresult=100;
    double mincontour=200;  //taille mimale du contour qu il faut le detecter
    int CVCONTOUR_APPROX_LEVEL;
    IplImage* img1_edge = cvCreateImage( cvGetSize(image1), 8, 1 );
    IplImage* img2_edge = cvCreateImage( cvGetSize(image2), 8, 1 );
    cvThreshold( image1, img1_edge, 128, 255, CV_THRESH_BINARY);
    cvThreshold( image2, img2_edge, 128, 255, CV_THRESH_BINARY);
    CvMemStorage* storage = cvCreateMemStorage();
    CvMemStorage *storage2 = cvCreateMemStorage();
    CvSeq* premier_contour_img1=NULL;
    CvSeq* premier_contour_img2=NULL;
    CvSeq *newseq=NULL;
    CvSeq *newseq2=NULL;

   //first Border extraction
    cvFindContours(
       img1_edge,
       storage,
       &premier_contour_img1,
       sizeof(CvContour),
       CV_RETR_LIST
    );

    //second border extraction
    cvFindContours(
       img2_edge,
       storage2,
       &premier_contour_img2,
       sizeof(CvContour),
       CV_RETR_LIST
    );
    
    CVCONTOUR_APPROX_LEVEL=ui->tolerance_lvl->value();
    //extract aprox polu
    for( CvSeq* c = premier_contour_img1; c != NULL;c = c->h_next) {
       if(cvContourPerimeter(c)>mincontour){
           newseq = cvApproxPoly(c,sizeof(CvContour),storage,CV_POLY_APPROX_DP,CVCONTOUR_APPROX_LEVEL,0); //pprox
        }

    }

    for(CvSeq* c = premier_contour_img2; c != NULL;c = c->h_next) {
       if(cvContourPerimeter(c) > mincontour){
           newseq2 = cvApproxPoly(c,sizeof(CvContour),storage2,CV_POLY_APPROX_DP,CVCONTOUR_APPROX_LEVEL,0); //pprox
        }
    }


    //match the two contours
    if(newseq && newseq2)
        matchresult = cvMatchContours(newseq2,newseq,1,2);
    
    cvReleaseImage(&img1_edge);
    cvReleaseImage(&img2_edge);
    cvReleaseMemStorage(&storage);
    cvReleaseMemStorage(&storage2);
    return matchresult;
}



char * MainWindow::convertstring(std::string s){
      int x = s.size();
      char * ch = new char[x+1];
      ch[x+1]=0;
      memcpy(ch,s.c_str(),x);
      return ch;
}

/** 
  * TODO Skin detector
  * Skin position Detector
  * @param {IpImage} src_image
  * @return {CvRect} hand rectangele position
  */
void MainWindow::detecter_pos_main(IplImage * src_image)
{
    IplImage * dest_image = cvCreateImage(cvGetSize(src_image), 8, 1);
    IplImage * HSV_image = cvCreateImage( cvGetSize(src_image), 8, 3);
    CvMemStorage* storage = cvCreateMemStorage();
    CvSeq* premier_contour_img1 = NULL;
    CvSeq *newseq = NULL;
    cvCvtColor(src_image,HSV_image, CV_RGB2HSV );
    cvInRangeS(HSV_image, cvScalar(ui->minH->value(),ui->minS->value(),ui->minV->value()), cvScalar(ui->maxH->value(),ui->maxS->value(),ui->maxV->value()),dest_image);
    cvSmooth(dest_image,dest_image,CV_MEDIAN,ui->smoothlvl->value());
    cvDilate(dest_image,dest_image,NULL,ui->kernelsize->value());
    cvErode(dest_image,dest_image,NULL,ui->kernelsize->value());

    // extract le premier contour
    cvFindContours(
        dest_image,
        storage,
        &premier_contour_img1,
        sizeof(CvContour),
        CV_RETR_LIST
    );

    int x,y;
    //aproximation Poly anvant de comparer les deux contours
    for(CvSeq* c = premier_contour_img1;c != NULL;c = c->h_next) {
        if(cvContourPerimeter(c) > 150){
            newseq = cvApproxPoly(c,sizeof(CvContour),storage,CV_POLY_APPROX_DP,5,0); //pprox
            x = cvBoundingRect(c).x;
            y = cvBoundingRect(c).y;
            if((x!=0)&&(y!=0)&&(y!=src_image->height)&&(x!=src_image->width))
                MainWindow::draw_box(src_image,cvBoundingRect(c));
         }
    }
   cvReleaseImage(&HSV_image);
   cvReleaseImage(&dest_image);
}

/*
 * Draw a blue box 
 * @param {IpImage} input image
 * @param {cvRect} blue box 
 */
void MainWindow::draw_box( IplImage* img, CvRect box ) {
cvRectangle (
        img,
        cvPoint(box.x,box.y),
        cvPoint(box.x+box.width,box.y+box.height),
        couleur /* couleur de rectangle */
    );
}


void MainWindow::stopped_timer()
{
    ui->signname->setText("");
}
