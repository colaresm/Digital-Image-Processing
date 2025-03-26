#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::Mat image = cv::imread("/content/image.21.15.png", cv::IMREAD_GRAYSCALE);
    if (image.empty()) {
        std::cerr << "Error loading image!" << std::endl;
        return -1;
    }

    cv::Mat grad_x, grad_y;
    cv::Mat abs_grad_x, abs_grad_y;

    cv::Sobel(image, grad_x, CV_16S, 1, 0, 3);
    cv::convertScaleAbs(grad_x, abs_grad_x);

    cv::Sobel(image, grad_y, CV_16S, 0, 1, 3);
    cv::convertScaleAbs(grad_y, abs_grad_y);

    cv::Mat sobel_image;
    cv::addWeighted(abs_grad_x, 0.5, abs_grad_y, 0.5, 0, sobel_image);

    cv::imwrite("sobel_output.jpg", sobel_image);

    std::cout << "Sobel filter applied and image saved as 'sobel_output.jpg'" << std::endl;
    return 0;
}
