#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
string folder = "/home/vboxuser/KUIOT-Teemo/openCV/openCV_study/data/";

int main() {
    Mat img(400, 640, CV_8UC3, Scalar(255, 255, 255));
    int a = 0;
    while(1){
        img = Scalar(255, 255, 255);
        line(img, Point(100+a, 100), Point(300, 200), Scalar(0, 0, 255), 3, LINE_AA);
        imshow("img", img);
        if (waitKey(30) == 27) break;
        a++;
    } 
    destroyAllWindows();
    return 0;
}