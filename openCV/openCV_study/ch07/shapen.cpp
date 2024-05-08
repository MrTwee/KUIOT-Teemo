#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
string folder = "/home/vboxuser/KUIOT-Teemo/openCV/openCV_study/data/";

int main() {
	Mat src = imread(folder + "rose.bmp", IMREAD_GRAYSCALE);

    vector<Mat> dsts;
    for (int sigma = 1; sigma <= 10; sigma += 1) {
        Mat blurred;
        GaussianBlur(src, dsts, Size(0, 0), sigma);
        float alpha = 1.f;
        Mat dst = (1 + alpha) * src - alpha * blurred;

        dst.push_back(dst);
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