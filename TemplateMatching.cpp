//
// Created by root on 12/13/18.
//

#include "TemplateMatching.hpp"
#include <opencv2/opencv.hpp>

TemplateMatching::TemplateMatching(cv::Mat Logo, cv::Mat Template, int MatchTemplateMethod) {

    int result_cols = Logo.cols - Template.cols + 1;
    int result_rows = Logo.rows - Template.rows + 1;
    cv::Mat result;

    result.create(result_rows, result_cols, 1);

    cv::matchTemplate(Logo, Template, result, MatchTemplateMethod);
    cv::normalize(result, result, 0, 255, cv::NORM_MINMAX);

    cv::minMaxLoc(result, &MinValue, &MaxValue, &MinLoc, &MaxLoc, cv::Mat());

    if (MatchTemplateMethod == 2 || MatchTemplateMethod == 1) {
        MatchLoc = MinLoc;
    } else {
        MatchLoc = MaxLoc;
    }

    cv::rectangle(Logo, MatchLoc, cv::Point(MatchLoc.x + Template.cols, MatchLoc.y + Template.rows),
                  cv::Scalar::all(0));
}