#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <features/ExampleFeature.h>
#include <utils/easylogging++.h>

using namespace cv;
INITIALIZE_EASYLOGGINGPP
int main(int argc, char ** argv){

  el::Loggers::reconfigureAllLoggers(el::ConfigurationType::Format, "%datetime %level %fbase : %msg");
  Mat image;
  image = imread(argv[1], 1);
  namedWindow("Display", WINDOW_AUTOSIZE);
  ExampleFeature alp;
  imshow("Display", image);
  LOG(INFO) << "Displaying Image";
  waitKey(0);

  return 0;
}
