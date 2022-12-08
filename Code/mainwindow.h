#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <QDebug>
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_a_open_triggered();

private:
    Ui::MainWindow *ui;
    cv::Mat image;

    void setUpImagesAndHistograms();
    std::string filename;
    cv::Mat buildHistogram(cv::Mat image);
    cv::Mat equalImageHist(cv::Mat image);
    cv::Mat equalImageHistRGB(cv::Mat image);
    cv::Mat histogramCalculation(cv::Mat image);
    cv::Mat increase(cv::Mat image);
    cv::Mat increase2(cv::Mat image);
    cv::Mat increase3(cv::Mat image);
    cv::Mat increase4(cv::Mat image);
    cv::Mat increase5(cv::Mat image);
    int R_increase = 0;
    int snr_increase = 7200;
    int LEN_increse2 = 78;
    int THETA_increase2 = 15;
    int snr_increase2 = 300;
    void calcPSF(cv::Mat& outputImg, cv::Size filterSize, int len, double theta);

    cv::Mat linearContrast(cv::Mat image);
    void resizeEvent(QResizeEvent *event);
};
#endif // MAINWINDOW_H
