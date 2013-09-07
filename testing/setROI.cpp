/*******************************************************************************************************************
 * Author: Sagar Rakshe 
 * Date: 
 * Problem Statement: Setting Region of Interest in the image(ROI).
*******************************************************************************************************************/

#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;
using namespace std;

int main(int argc, char *argv[])
{
    IplImage *src;

    src = cvLoadImage(argv[1]);
    cvSetImageROI(src, cvRect(150,150,100,100))  ;
    cvAddS(src, cvScalar(25,2,255), src);
    cvResetImageROI(src);
    
    namedWindow("Testing Window", 1);
    cvShowImage("Testing Window", src);
    waitKey(0);

	return 0;
}