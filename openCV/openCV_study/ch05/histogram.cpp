#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
string folder = "/home/vboxuser/KUIOT-Teemo/openCV/openCV_study/data/";
void on_brightness(int pos, void *userdata);

int main() {
	Mat src = imread(folder + "lenna.bmp", IMREAD_GRAYSCALE);
	Mat histo;
    int channels[] = {0};
    int dims = 1;
    const int histSize[] = { 256 };
    float graylevel[] = { 0, 256 };
    const float* ranges[] = { graylevel };

    calcHist(&src, 1, channels, noArray(), histo, dims, histSize, ranges);
    imshow("src", src);
    cout << "histo: " << histo << endl;
    Mat graph(100, 256, CV_8U, Scalar(255));
    for (int i = 0; i < 256; i++) {
        line(graph, Point(i, 100), Point(i, 100 - cvRound(histo.at<float>(i))),
            Scalar(0));
    }

    imshow("graph", graph);
    waitKey();
    destroyAllWindows();
    return 0;
}