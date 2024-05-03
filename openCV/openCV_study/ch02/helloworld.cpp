#include "opencv2/opencv.hpp"
#include <iostream>
#include <string>

std::string folder = "/home/vboxuser/KUIOT-Teemo/openCV/openCV_study/data/";

int main() {
    std::cout << "hello, world!" << std::endl;
    cv::Mat img;
    img = cv::imread(folder + "lenna.bmp");
    cv::imshow("image", img);
    cv::waitKey(0);
    return 0;
}