#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::Mat image = cv::imread("/content/image.21.15.png", cv::IMREAD_COLOR);

    if (image.empty()) {
        std::cout << "Error loading the image!" << std::endl;
        return -1;
    }

    cv::Mat image_filtered;
    int kernel_size = 5;
    double sigma = 1.5;
    
    cv::GaussianBlur(image, image_filtered, cv::Size(kernel_size, kernel_size), sigma);

    cv::imwrite("filtered_image_gaussian.jpg", image_filtered);

    return 0;
}
