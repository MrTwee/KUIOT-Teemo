#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
string folder = "/home/vboxuser/KUIOT-Teemo/openCV/openCV_study/data/";
void on_brightness(int pos, void *userdata);

int main() {
	Mat src = imread(folder + "lenna.bmp", IMREAD_GRAYSCALE);
    int position = 256;
    namedWindow("img");
    createTrackbar("Brightness", "img", &position, 511, on_brightness, (void*)&src);
    imshow("img", src);
	waitKey();
	destroyAllWindows();
	return 0;
}

void on_brightness(int pos, void *userdata) {
    Mat img = *(Mat *) userdata;
    Mat dst = img + pos - 255;
    imshow("img", dst);
}