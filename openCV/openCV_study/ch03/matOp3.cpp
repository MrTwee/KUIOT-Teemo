#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
string folder = "/home/vboxuser/KUIOT-Teemo/openCV/openCV_study/data/";

int main() {
    
    // Mat 예제
    Mat img1 = imread(folder + "dog.bmp");
    Rect roi(220, 120, 200, 200);
    Mat img2 = img1(roi);
    Mat img3 = img1(roi).clone();

    img2 = ~img2;
    img1.setTo(Scalar(0, 255, 255));

    imshow("img1", img1);
    imshow("img2", img2);
    imshow("img3", img3);
    
    waitKey(0);
    
    return 0;
    
}