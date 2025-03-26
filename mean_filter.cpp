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
    
    cv::blur(image, image_filtered, cv::Size(kernel_size, kernel_size));

    cv::imwrite("filtered_image.jpg", image_filtered);

    return 0;
}

