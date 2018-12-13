//
// Created by root on 12/13/18.
//
#include <opencv2/opencv.hpp>

#ifndef OPENCV_TEMPLATEMATCHING_HPP
#define OPENCV_TEMPLATEMATCHING_HPP


class TemplateMatching {

private:
    double MinValue;
    double MaxValue;
    cv::Point MinLoc;
    cv::Point MaxLoc;
    cv::Point MatchLoc;


public:
    TemplateMatching(cv::Mat, cv::Mat, int);

};


#endif //OPENCV_TEMPLATEMATCHING_HPP