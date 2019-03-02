//
// Created by root on 12/13/18.
//

#include "TemplateMatching.hpp"
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>

TemplateMatching::TemplateMatching(cv::Mat Logo, cv::Mat Template, int MatchTemplateMethod) {

    result_cols = Logo.cols - Template.cols + 1;
    result_rows = Logo.rows - Template.rows + 1; // ICI
    cv::Mat result;
    result.create(result_rows, result_cols, 1);


    cv::matchTemplate(Logo, Template, result, MatchTemplateMethod);
    cv::minMaxLoc(Logo, &MinValue, &MaxValue, &MinLoc, &MaxLoc, cv::Mat());

    if (MatchTemplateMethod == cv::TM_SQDIFF || MatchTemplateMethod == cv::TM_SQDIFF_NORMED) {
        MatchLoc = MinLoc;
    } else {
        MatchLoc = MaxLoc;
    }

    cv::cvtColor(Logo, resultColors, cv::COLOR_GRAY2RGB);
    cv::rectangle(resultColors, MatchLoc, cv::Point(MatchLoc.x + Template.cols, MatchLoc.y + Template.rows),
                  cv::Scalar(0, 0, 255), 1);

}