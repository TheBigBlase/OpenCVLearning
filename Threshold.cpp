//
// Created by root on 12/13/18.
//

#include "Threshold.hpp"
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>

Threshold::Threshold(cv::Mat Logo) {
    cv::threshold(Logo, ThresholdResult, thresh, maxValue, cv::THRESH_BINARY);
    getThresholdResult();
}

cv::Mat Threshold::getThresholdResult() {
    return ThresholdResult;
}