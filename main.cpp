#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#define USAGE "\n" \
        "cellular_automata - simple c++ programm for something \n" \
        "xDDDDDDDDDDDDDDDDDDDDDDDDDD \n"                           \
        "\n"

using namespace cv;

inline std::string ToBinary(int n)
{
    std::string r;
    while(n != 0) { r += ( n%2 == 0 ? "0":"1" ); n /= 2;}
    return r;
}

std::string BinaryToEightSymbols(std::string binary)
{
    int l = binary.length();
    if (l < 8)
    {
        for (int i {}; i < 8 - l; i++)
            binary.insert(0, "0");
    }
    return binary;
}


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

inline void StdoutMatr(Mat m) { std::cout << "Matrix = \n" << " " << m << "\n\n"; }

int main(int arg_c, const char** arg_v) {

//    if (arg_c == 1)
//        return ErrorExit(0, USAGE);

    int width {10};
    int height {10};

    // Create image matrix (OpenCV + 8byte + Unsigned = CV_8U)
    Mat image   = Mat::zeros(width, height, CV_8U);
    // Create initial matrix for CA
    Mat initial = Mat::zeros(1,height, CV_8U);
    initial.at<uchar>(0, (int)height / 2 - 1) = 1;
    // Wolfram rule
    std::string WfRule = "10110110";


    //image.push_back(mat);

    StdoutMatr(initial);

//    for (int i {}; i < image.rows; i++)
//        for (int j {}; j < image.cols; j++)
//            if (i == j) image.at<uchar>(i,j) = 255;
//    imshow("test", image);
//    waitKey(0);

    return 0;
}
