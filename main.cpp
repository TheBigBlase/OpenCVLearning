#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

int main(){
    cv::Mat image;
    image=cv::imread("P:\\Documents\\Code\\Cpp\\VS code\\OpenCV\\IceCream.jpg",CV_LOAD_IMAGE_GRAYSCALE);
    std::cout<<"HI ! :) "<<std::endl;
    cv::namedWindow("Wanna Ice cream ? ",CV_WINDOW_AUTOSIZE);
    cv::imshow("Ice cream Image... o_O i'm jalous",image);
}