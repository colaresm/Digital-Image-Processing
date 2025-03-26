# Image Processing Algorithms in C++

This repository contains a collection of C++ code implementations for various image processing algorithms using the OpenCV library. The examples provided here demonstrate common techniques used in computer vision and image processing tasks.

## Algorithms Implemented

### 1. **Mean Filter**
   - A basic low-pass filter that smooths the image by averaging the pixel values in a given kernel.

### 2. **Gaussian Filter**
   - Applies a Gaussian blur to reduce noise and smooth the image, using a Gaussian kernel.

### 3. **Median Filter**
   - Uses the median value of the pixel values within a kernel to filter out noise, especially useful for removing salt-and-pepper noise.

### 4. **Dilation & Erosion**
   - Implements morphological operations: **Dilation** expands white regions, and **Erosion** shrinks them in a binary image.

### 5. **Otsu's Thresholding**
   - Automatically calculates an optimal threshold value for converting a grayscale image into a binary image.

## Requirements

- **OpenCV** library (version 4.x or above)
  
  You can install OpenCV using:
  ```bash
  sudo apt-get install libopencv-dev
