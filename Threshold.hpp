//
// Created by root on 12/13/18.
//

#ifndef OPENCV_THRESHOLD_HPP
#define OPENCV_THRESHOLD_HPP

#include <opencv2/core.hpp>

class Threshold {
private:
    double maxValue = 255;
    double thresh = 127;
    cv::Mat ThresholdResult;


public:
    Threshold(cv::Mat Logo);

    cv::Mat getThresholdResult();


};


#endif //OPENCV_THRESHOLD_HPP
