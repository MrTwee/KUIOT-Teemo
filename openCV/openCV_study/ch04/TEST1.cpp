#include "opencv2/opencv.hpp"
#include <iostream>
#include <vector>

using namespace cv;
using namespace std;

string folder = "/home/vboxuser/KUIOT-Teemo/openCV/openCV_study/data/";
const string outputFileName = "mouseBGRvector.json";
const int RECT_SIZE = 50;
vector<Scalar> bgrVector;
bool isDrawing = false;
Point rectStart;

void mouseCallback(int event, int x, int y, int flags, void* userdata) {
    if (event == EVENT_LBUTTONDOWN) {
        isDrawing = true;
        rectStart = Point(x, y);
        Scalar bgr = ((Mat*)userdata)->at<Vec3b>(y, x);
        bgrVector.push_back(Scalar(bgr[0], bgr[1], bgr[2]));
        cout << "BGR 값: " << bgr << endl;
    }
}

void saveBGRToFile(const string& fileName, const vector<Scalar>& bgrVector) {
    FileStorage fs(folder + fileName, FileStorage::WRITE);
    if (!fs.isOpened()) {
        cerr << "파일 열기 실패!" << endl;
        return;
    }

    fs << "bgr_values" << "[";
    for (const Scalar& bgr : bgrVector) {
        fs << "[:" << bgr[0] << bgr[1] << bgr[2] << "]";
    }
    fs << "]";
    fs.release();
}

int main() {
    Mat img = imread(folder + "lenna.bmp");
    if (img.empty()) {
        cerr << "이미지 열기 오류!" << endl;
        return 1;
    }

    namedWindow("Image");
    setMouseCallback("Image", mouseCallback, &img);

    TickMeter tm;

    while (true) {
        Mat displayImg = img.clone();
        if (isDrawing) {
            rectangle(displayImg, rectStart, Point(rectStart.x + RECT_SIZE, rectStart.y + RECT_SIZE), Scalar(0, 255, 0), 2);
        }

        imshow("Image", displayImg);
        tm.start();
        int key = waitKey(1);
        tm.stop();

        if (key == 27) {  // ESC 키로 종료
            break;
        } else if (key == 's') {  // 's' 키로 BGR 벡터를 파일에 저장
            saveBGRToFile(outputFileName, bgrVector);
            cout << "BGR 값이 " << outputFileName << "에 저장되었습니다." << endl;
        }
    }

    cout << "총 소요 시간: " << tm.getTimeSec() << " 초." << endl;

    return 0;
}
