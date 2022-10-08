#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#define USAGE "\n" \
        "cellular_automata - simple c++ programm for something \n" \
        "xDDDDDDDDDDDDDDDDDDDDDDDDDD \n"                           \
        "\n"

using namespace cv;

template<typename ... T>
inline std::string ToString(T ... rest)
{
    char buf[4096];
    snprintf(buf, sizeof(buf), rest ...);
    return buf;
}

template<typename R, typename ... T>
inline R ErrorExit(R result, T ... rest)
{
    std::cerr << ToString(rest ...);
    return result;
}


int main(int arg_c, const char** arg_v) {

//    if (arg_c == 1)
//        return ErrorExit(0, USAGE);
    int width {500};
    int height {500};
    Mat image = Mat::ones(width, height, CV_8U);
    imshow("test", image);
    waitKey(0);
    //std::cout << "image = " << std::endl << " " << image << std::endl << std::endl;

    return 0;
}
