
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
	//read the images
	Mat foreground = imread("");
	Mat background = imread("");
	Mat alpha = imread("puppets_alpha.png");

	//convert Mat to float data type
	foreground.convertTo(foreground, CV_32FC3);
	background.convertTo(background, CV_32FC3);

	// Normalize the alpha mask to keep intensity between 0 and 1
	alpha.convertTo(alpha, CV_32FC3, 1.0 / 255);

	//storage for output image
	Mat outImage = Mat::zeros(foreground.size(), foreground.type());

	//Multiply the foreground with the alpha matte
	multiply(alpha, foreground, foreground);
	//Multiply the background with (1 - alpha)
	multiply(Scalar::all(1.0)-alpha, background, background);

	//add the masked foreground and background.
	add(foreground, background, outImage);
	//display image
	imshow("alpha blended image", outImage / 255);
	waitKey(0);
	return 0;
}

