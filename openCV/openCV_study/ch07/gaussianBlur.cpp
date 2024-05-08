#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
string folder = "/home/vboxuser/KUIOT-Teemo/openCV/openCV_study/data/";

int main() {
	Mat src = imread(folder + "rose.bmp", IMREAD_GRAYSCALE);

    vector<Mat> dsts;

    for (int sigma = 1; sigma <= 10; sigma += 1) {
        Mat dst;
        GaussianBlur(src, dst, Size(0, 0), sigma);
        dsts.push_back(dst);
    }

    imshow("src", src);
    int i = 0;

    for (auto dst : dsts) {
        imshow("dst" + to_string(i), dst);
        i++;
    }


	waitKey();
	destroyAllWindows();
	return 0;
}