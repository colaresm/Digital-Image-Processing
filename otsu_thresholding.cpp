#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::Mat image = cv::imread("/content/image.21.15.png", cv::IMREAD_GRAYSCALE);

    if (image.empty()) {
        std::cout << "Error loading the image!" << std::endl;
        return -1;
    }

    
    double threshold_value;

    
    cv::Mat otsu_image;
    cv::threshold(image, otsu_image, 0, 255, cv::THRESH_BINARY | cv::THRESH_OTSU);

 
    cv::imwrite("otsu_threshold_image.jpg", otsu_image);

    std::cout << "Otsu thresholding applied successfully!" << std::endl;

    return 0;
}
