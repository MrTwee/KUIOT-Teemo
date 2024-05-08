#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
string folder = "/home/vboxuser/KUIOT-Teemo/openCV/openCV_study/data/";
void on_brightness(int pos, void *userdata);

int main() {
	Mat src = imread(folder + "lenna.bmp", IMREAD_GRAYSCALE);
	Mat original = src.clone();
    Mat src2 = src.clone();
    src = src * 2.f;
    src2 = src + (src - 128) * 1.f;
    cout << "original mean: " << mean(original) << endl;
    imshow("original", original);
    imshow("src", src);
    imshow("src2", src2);
	waitKey();
	destroyAllWindows();
	return 0;
}

void on_brightness(int pos, void *userdata) {
    Mat img = *(Mat *) userdata;
    Mat dst = img + pos - 255;
    imshow("img", dst);
}