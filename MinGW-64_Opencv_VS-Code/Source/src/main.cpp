#include <iostream>
#include <opencv2/opencv.hpp>

int main( int argc, char** argv )
{
    std::cout << "aa" << std::endl;
 
    std::string img = "C:\\\Application\\OpencvCpp_Practice\\Source\\src\\lenna.jpg";
    cv::Mat srcImage = cv::imread(img);
    if (!srcImage.data) {
        return 1;
    }
    cv::imshow("srcImage", srcImage);
    cv::waitKey(0);
    return 0;
}