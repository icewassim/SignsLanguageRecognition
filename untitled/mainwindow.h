#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <opencv/cxcore.h>
#include <opencv/cxcore.h>
#include <QTimer>
#include <stdlib.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    char * convertstring(std::string );
    float match_two_shapes(IplImage*,IplImage *);
    CvCapture* p_capWebcam;
    IplImage* p_imgOriginal;
    IplImage* p_imgProcessed;
    IplImage *p_gray;
    CvScalar couleur;
    char charCheckForEscKey;
    CvMemStorage* p_strStorage;
    bool showGray,startmatching,stopCapture;
    char* alphabetTable[6];
    explicit MainWindow(QWidget *parent = 0);
    void Capture();

    ~MainWindow();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_template_buttom_clicked();

    void on_Findcontourbuttom_clicked();

    void on_compareButtom_clicked();

    void stopped_timer();
private:
    Ui::MainWindow *ui;
    void draw_box( IplImage* img, CvRect box );
    CvRect detecter_pos_main(IplImage * src_image);
    QTimer *timer1;
};

#endif // MAINWINDOW_H
