/*
*	Commonly includes headers and definitions
*/
#ifndef COMMON_HEADERS
#define COMMON_HEADERS

//#define __NO_STD_VECTOR
#include <iostream>
#include <stdlib.h>
//OpenCV is modular
#include <assert.h>
#include <vector>
#include <string>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>		//IO ops
#include <CL/cl.hpp>

using namespace std;
using namespace cv;
using namespace cl;

#define ESC 27

/*
* OPenCL error checking
*/
#define CL_CHECKERROR(err) (checkErr(err,__FILE__,__LINE__))
inline static void checkErr(cl_int err,const char * file, int line){
	if(err!=CL_SUCCESS){
		cerr << "Error " << err << " in file " << file << " at line number " << line << endl;
		exit(EXIT_FAILURE);
	}
}
#endif
