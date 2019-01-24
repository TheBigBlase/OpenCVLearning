#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/core.hpp>
#include "TemplateMatching.hpp"

int main(){
    char retry{'y'};
    int MatchTemplateMethod;
    double maxValue = 255;
    double thresh = 127;


    while (retry == ('y')) {
        std::cout << "Which matchTemplate method to use ? " << std::endl;
        std::cin >> MatchTemplateMethod;
        if (MatchTemplateMethod > 5 || MatchTemplateMethod < 0) {
            std::cerr << "MatchMethodTemplate !(0;5)";
            return -1;
        }

        cv::Mat Logo = cv::imread("./partition.jpg", cv::IMREAD_GRAYSCALE);
        cv::Mat Template = cv::imread("./note.png", cv::IMREAD_GRAYSCALE);

        if (Logo.empty() || Template.empty()) {
            std::cerr << "one or both images are wrongly named" << std::endl;
            return -1;
        }


        cv::Mat ThresholdResult;
        cv::threshold(Logo, ThresholdResult, thresh, maxValue, cv::THRESH_BINARY);

        auto result = TemplateMatching(ThresholdResult, Template, MatchTemplateMethod);

        cv::imshow("Partition_window", result.resultColors);
        cv::imshow("Other window", Template);



        cv::waitKey(0);
        cv::destroyAllWindows();

        std::cout << "wanna retry ? y/n" << std::endl;
        std::cin >> retry;
    }
    return 0;
}
