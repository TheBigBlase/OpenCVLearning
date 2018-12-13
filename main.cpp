#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/core.hpp>
#include "TemplateMatching.hpp"

int main(){
    char retry('y');
    int MatchTemplateMethod;


    while (retry == ('y')) {
        std::cout << "Which matchTemplate method to use ? " << std::endl;
        std::cin >> MatchTemplateMethod;
        if (MatchTemplateMethod > 5 || MatchTemplateMethod < 1) {
            std::cerr << "MatchMethodTemplate !(1;5)";
        }

        cv::Mat Logo = cv::imread("./Logo.jpg", cv::IMREAD_COLOR);
        cv::Mat Template = cv::imread("./Template.jpg", cv::IMREAD_COLOR);

        if (Logo.empty() || Template.empty()) {
            std::cerr << "one or both images are wrongly named" << std::endl;
            return -1;
        }
        TemplateMatching(Logo, Template, MatchTemplateMethod);

        cv::imshow("Partition_window", Logo);
        cv::waitKey(0);
        cv::destroyAllWindows();

        std::cout << "wanna retry ? y/n" << std::endl;
        std::cin >> retry;
    }
    return 0;
}
