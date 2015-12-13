#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <features/ExampleFeature.h>

using namespace cv;

int main(int argc, char ** argv){
  Mat image;
  image = imread(argv[1], 1);
  namedWindow("Display", WINDOW_AUTOSIZE);
  ExampleFeature alp;
  imshow("Display", image);
  waitKey(0);

  return 0;
}
