#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
string folder = "/home/vboxuser/KUIOT-Teemo/openCV/openCV_study/data/";

int main() {
	Mat src = imread(folder + "rose.bmp", IMREAD_GRAYSCALE);

    vector<Mat> dsts;

    for (int ksize = 3; ksize <= 19; ksize += 2) {
        Mat dst;
        blur(src, dst, Size(ksize, ksize));
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