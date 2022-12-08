#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QFileDialog>
#include <QPixmap>
#include <QScrollArea>
#include <QtMath>

using namespace std;
using namespace cv;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

     filename = QFileDialog::getOpenFileName(this).toStdString();
     image = imread(filename);

     setUpImagesAndHistograms();
     ui->scrollArea->resize(width(),height()*0.9);

}






Mat MainWindow::equalImageHist(Mat image){
    Mat hist_equalized_image;

    cvtColor(image, hist_equalized_image, COLOR_BGR2YCrCb);

    vector<Mat> vec_channels;
    split(hist_equalized_image, vec_channels);

    equalizeHist(vec_channels[0], vec_channels[0]);

    merge(vec_channels, hist_equalized_image);

    cvtColor(hist_equalized_image, hist_equalized_image, COLOR_YCrCb2BGR);

    return hist_equalized_image;
}
Mat MainWindow::equalImageHistRGB(Mat image){

    Mat modified_image;
    image.copyTo(modified_image);

    vector<Mat> vec_channels;
    split(modified_image, vec_channels);

    equalizeHist(vec_channels[0], vec_channels[0]);

    merge(vec_channels, modified_image);

    return modified_image;
}

Mat MainWindow::histogramCalculation(Mat image)
{
    Mat src = image;
    if( src.empty() )
    {
    }
    vector<Mat> bgr_planes;
    split( src, bgr_planes );
    int histSize = 256;
    float range[] = { 0, 256 }; //the upper boundary is exclusive
    const float* histRange[] = { range };
    bool uniform = true, accumulate = false;
    Mat b_hist, g_hist, r_hist;
    calcHist( &bgr_planes[0], 1, 0, Mat(), b_hist, 1, &histSize, histRange, uniform, accumulate );
    calcHist( &bgr_planes[1], 1, 0, Mat(), g_hist, 1, &histSize, histRange, uniform, accumulate );
    calcHist( &bgr_planes[2], 1, 0, Mat(), r_hist, 1, &histSize, histRange, uniform, accumulate );
    int hist_w = 512, hist_h = 400;
    int bin_w = cvRound( (double) hist_w/histSize );
    Mat histImage( hist_h, hist_w, CV_8UC3, Scalar( 0,0,0) );
    normalize(b_hist, b_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat() );
    normalize(g_hist, g_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat() );
    normalize(r_hist, r_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat() );
    for( int i = 1; i < histSize; i++ )
    {
        line( histImage, Point( bin_w*(i-1), hist_h - cvRound(b_hist.at<float>(i-1)) ),
              Point( bin_w*(i), hist_h - cvRound(b_hist.at<float>(i)) ),
              Scalar( 255, 0, 0), 2, 8, 0  );
        line( histImage, Point( bin_w*(i-1), hist_h - cvRound(g_hist.at<float>(i-1)) ),
              Point( bin_w*(i), hist_h - cvRound(g_hist.at<float>(i)) ),
              Scalar( 0, 255, 0), 2, 8, 0  );
        line( histImage, Point( bin_w*(i-1), hist_h - cvRound(r_hist.at<float>(i-1)) ),
              Point( bin_w*(i), hist_h - cvRound(r_hist.at<float>(i)) ),
              Scalar( 0, 0, 255), 2, 8, 0  );
    }

    return histImage;
}



Mat MainWindow::increase(Mat image)
{
    Mat modified_image;
    image.copyTo(modified_image);
    float kernel[9];
    kernel[0] = -1;
    kernel[1] = -1;
    kernel[2] = -1;

    kernel[3] = -1;
    kernel[4] = 9;
    kernel[5] = -1;

    kernel[6] = -1;
    kernel[7] = -1;
    kernel[8] = -1;
    cv::Mat kernel_matrix = Mat(3,3, CV_32FC1, kernel);
    filter2D(image, modified_image, 0, kernel_matrix);
    return modified_image;

}

Mat MainWindow::increase2(Mat image)
{
    Mat modified_image;
    image.copyTo(modified_image);

    float kernel[9];
    kernel[0] = 1;
    kernel[1] = -2;
    kernel[2] = 1;

    kernel[3] = -2;
    kernel[4] = 5;
    kernel[5] = -2;

    kernel[6] = 1;
    kernel[7] = -2;
    kernel[8] = 1;
    cv::Mat kernel_matrix = Mat(3,3, CV_32FC1, kernel);
    filter2D(image, modified_image, 0, kernel_matrix);
    return modified_image;
}

Mat MainWindow::increase3(Mat image)
{
    Mat modified_image;
    image.copyTo(modified_image);

    float kernel[9];
    kernel[0] = 0;
    kernel[1] = -1;
    kernel[2] = 0;

    kernel[3] = -1;
    kernel[4] = 5;
    kernel[5] = -1;

    kernel[6] = 0;
    kernel[7] = -1;
    kernel[8] = 0;
    cv::Mat kernel_matrix = Mat(3,3, CV_32FC1, kernel);
    filter2D(image, modified_image, 0, kernel_matrix);
    return modified_image;
}

Mat MainWindow::increase4(Mat image)
{
    Mat modified_image;
    image.copyTo(modified_image);
    float kernel[9];

    kernel[0] = 0;
    kernel[1] = -1;
    kernel[2] = 0;

    kernel[3] = -1;
    kernel[4] = 20;
    kernel[5] = -1;

    kernel[6] = 0;
    kernel[7] = -1;
    kernel[8] = 0;
    cv::Mat kernel_matrix = Mat(3,3, CV_32FC1, kernel);
    filter2D(image, modified_image, 0, kernel_matrix);
    return modified_image;
}

Mat MainWindow::increase5(Mat image)
{
    Mat modified_image;
    image.copyTo(modified_image);
    float kernel5[25] = {0,0,-1,0,0,
                         0,-1,-2,-1,0,
                         -1,-2, 16, -2, -1,
                         0, -1, -2, -1, 0,
                         0, 0, -1, 0, 0};
    cv::Mat kernel5_matrix = Mat(5,5,CV_32FC1, kernel5);
    filter2D(image, modified_image, 0, kernel5_matrix);
    return modified_image;
}



Mat MainWindow::buildHistogram(Mat src){
    vector<Mat> bgr_planes;
    split( src, bgr_planes );
    int histSize = 256;
    float range[] = { 0, 256 };
    const float* histRange[] = { range };
    bool uniform = true, accumulate = false;
    Mat b_hist, g_hist, r_hist;
    calcHist( &bgr_planes[0], 1, 0, Mat(), b_hist, 1, &histSize, histRange, uniform, accumulate );
    calcHist( &bgr_planes[1], 1, 0, Mat(), g_hist, 1, &histSize, histRange, uniform, accumulate );
    calcHist( &bgr_planes[2], 1, 0, Mat(), r_hist, 1, &histSize, histRange, uniform, accumulate );
    int hist_w = 512, hist_h = 400;
    int bin_w = cvRound( (double) hist_w/histSize );
    Mat histImage( hist_h, hist_w, CV_8UC3, Scalar( 0,0,0) );
    normalize(b_hist, b_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat() );
    normalize(g_hist, g_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat() );
    normalize(r_hist, r_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat() );
    for( int i = 1; i < histSize; i++ )
    {
        line( histImage, Point( bin_w*(i-1), hist_h - cvRound(b_hist.at<float>(i-1)) ),
              Point( bin_w*(i), hist_h - cvRound(b_hist.at<float>(i)) ),
              Scalar( 255, 0, 0), 2, 8, 0  );
        line( histImage, Point( bin_w*(i-1), hist_h - cvRound(g_hist.at<float>(i-1)) ),
              Point( bin_w*(i), hist_h - cvRound(g_hist.at<float>(i)) ),
              Scalar( 0, 255, 0), 2, 8, 0  );
        line( histImage, Point( bin_w*(i-1), hist_h - cvRound(r_hist.at<float>(i-1)) ),
              Point( bin_w*(i), hist_h - cvRound(r_hist.at<float>(i)) ),
              Scalar( 0, 0, 255), 2, 8, 0  );
    }
    return histImage;
}

Mat MainWindow::linearContrast(Mat image){
    Mat modified_image;
    image.copyTo(modified_image);
    cvtColor(modified_image, modified_image, COLOR_BGR2YCrCb);
    vector<Mat> vec_channels;
    split(modified_image, vec_channels);
        double min,max;
        minMaxLoc(modified_image,&min,&max);
        for(int j=0;j<vec_channels[0].rows;j++)
        {
              for (int i=0;i<vec_channels[0].cols;i++)
              {
                  int x = vec_channels[0].at<uchar>(j,i);
                  vec_channels[0].at<uchar>(j,i) = (x-min)/(max-min)*255;
              }
        }
    merge(vec_channels, modified_image);
    cvtColor(modified_image, modified_image, COLOR_YCrCb2BGR);
    return modified_image;
}


void MainWindow::resizeEvent(QResizeEvent *event){
    ui->scrollArea->resize(width(),height()*0.9);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_a_open_triggered()
{
    filename = QFileDialog::getOpenFileName(this).toStdString();
    image = imread(filename);
    setUpImagesAndHistograms();
}

void MainWindow::setUpImagesAndHistograms(){
    Mat linImage = linearContrast(image);
    Mat linImageHistogram = buildHistogram(linImage);
    Mat incresible = increase2(image);
    Mat increased2 = increase2(image);
    Mat increased3 = increase3(image);
    Mat increased4 = increase4(image);
    Mat increased5 = increase5(image);
    Mat hist_equalized_image = equalImageHist(image);
    Mat hist_equalizedRGB_image = equalImageHistRGB(image);
    Mat histImage = buildHistogram(image);
    Mat histImage2 = buildHistogram(hist_equalized_image);
    Mat histImage3 = buildHistogram(hist_equalizedRGB_image);
    Mat negative_image_hist = buildHistogram(hist_equalizedRGB_image);
    imwrite("modified_images\\hist_equalized_image.jpg",hist_equalized_image);
    imwrite("modified_images\\orig_hist.jpg",histImage);
    imwrite("modified_images\\final_hist.jpg",histImage2);
    imwrite("modified_images\\hist_equalizedRGB_image.jpg",hist_equalizedRGB_image);
    imwrite("modified_images\\histImage3.jpg",histImage3);
    imwrite("modified_images\\negative_image_hist.jpg",negative_image_hist);
    imwrite("modified_images\\increased5.jpg", increased5);
    imwrite("modified_images\\increased4.jpg", increased4);
    imwrite("modified_images\\increased3.jpg", increased3);
    imwrite("modified_images\\increased2.jpg", increased2);
    imwrite("modified_images\\increased.jpg", incresible);
    imwrite("modified_images\\linImage.jpg",linImage);
    imwrite("modified_images\\linImageHistogram.jpg",linImageHistogram);
    ui->label_2->setPixmap(QPixmap(QString::fromStdString(filename)).scaled(200,200));
    ui->label_11->setPixmap(QPixmap(QString::fromStdString(filename)).scaled(200,200));
    ui->label_3->setPixmap(QPixmap("modified_images\\hist_equalized_image.jpg").scaled(200,200));
    ui->label_4->setPixmap(QPixmap("modified_images\\orig_hist.jpg").scaled(200,200));
    ui->label_13->setPixmap(QPixmap("modified_images\\orig_hist.jpg").scaled(200,200));
    ui->label_5->setPixmap(QPixmap("modified_images\\final_hist.jpg").scaled(200,200));
    ui->label_10->setPixmap(QPixmap("modified_images\\linImage.jpg").scaled(200,200));
    ui->label_12->setPixmap(QPixmap("modified_images\\linImageHistogram.jpg").scaled(200,200));
    ui->label_16->setPixmap(QPixmap("modified_images\\hist_equalizedRGB_image.jpg").scaled(200,200));
    ui->label_17->setPixmap(QPixmap("modified_images\\histImage3.jpg").scaled(200,200));
    ui->label_19->setPixmap(QPixmap("modified_images\\hist_equalized_image.jpg").scaled(200,200));
    ui->label_20->setPixmap(QPixmap("modified_images\\final_hist.jpg").scaled(200,200));
    ui->label_23->setPixmap(QPixmap(QString::fromStdString(filename)).scaled(200,200));
    ui->label_26->setPixmap(QPixmap("modified_images\\increased2.jpg").scaled(200,200));
    ui->label_29->setPixmap(QPixmap("modified_images\\increased.jpg").scaled(200, 200));
    ui->label_31->setPixmap(QPixmap("modified_images\\increased3.jpg").scaled(200, 200));
    ui->label_33->setPixmap(QPixmap("modified_images\\increased4.jpg").scaled(200,200));
    ui->label_35->setPixmap(QPixmap("modified_images\\increased5.jpg").scaled(200,200));
}
