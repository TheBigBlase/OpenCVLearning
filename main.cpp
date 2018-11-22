#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <string>

int main(){
    string::string Answer; 
    cv::Mat image;
    image=cv::imread("P:\\Documents\\Code\\Cpp\\VS code\\OpenCV\\IceCream.jpg",CV_LOAD_IMAGE_GRAYSCALE);
    std::cout<<"HI ! :) "<<std::endl;
    cv::namedWindow("Wanna Ice cream ? ",CV_WINDOW_AUTOSIZE);
    cv::imshow("Ice cream Image... o_O i'm jalous",image);
    std::cout<<"Wanna save that pic ? "std::endl;
    std::cin>> Answer; 
    if (Answer[1]=="Y"){
        cv::imwrite(image,./GrayIcecream);
    }
    else if(Answer[2]=="N"){
        std::cout<<"K"<<std::endl;
    }
    else {
        std::cout<<"Can't read the answer properly."
        return -1;
    }
}