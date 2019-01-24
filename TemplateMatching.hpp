//
// Created by root on 12/13/18.
//

#ifndef OPENCV_TEMPLATEMATCHING_HPP
#define OPENCV_TEMPLATEMATCHING_HPP

#include <opencv2/core.hpp>

class TemplateMatching {
private:
    double MaxValue;
    cv::Point MinLoc;
    cv::Point MaxLoc;
    cv::Point MatchLoc;
    int result_cols;
    int result_rows;
public:
    TemplateMatching(cv::Mat, cv::Mat, int);

    cv::Mat resultColors;
    double MinValue;
};


#endif //OPENCV_TEMPLATEMATCHING_HPP