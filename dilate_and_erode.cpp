#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::Mat image = cv::imread("/content/image.21.15.png", cv::IMREAD_GRAYSCALE);

    if (image.empty()) {
        std::cout << "Error loading the image!" << std::endl;
        return -1;
    }

    
    int kernel_size = 5;
    cv::Mat kernel = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(kernel_size, kernel_size));

    
    cv::Mat dilated_image;
    cv::dilate(image, dilated_image, kernel);

    
    cv::Mat eroded_image;
    cv::erode(image, eroded_image, kernel);

    
    cv::imwrite("dilated_image.jpg", dilated_image);
    cv::imwrite("eroded_image.jpg", eroded_image);

    return 0;
}
