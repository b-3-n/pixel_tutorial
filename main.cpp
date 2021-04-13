#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace cv;
int main()
{
    int width = 256;
    int height = 256;
    cv::Mat img(cv::Size(width, height), CV_8U);

    for (int i = 0; i < 5; ++i) {
      for (int j = 0; j < height; ++j) {
        img.row(i).col(j) = 255;
      }
    }

    /* std::string image_path = "photo.jpg"; */
    /* Mat img = imread(image_path, IMREAD_COLOR); */
    /* if(img.empty()) */
    /* { */
    /*     std::cout << "Could not read the image: " << image_path << std::endl; */
    /*     return 1; */
    /* } */
    imshow("Display window", img);
    int k = waitKey(0); // Wait for a keystroke in the window
    return 0;
}
