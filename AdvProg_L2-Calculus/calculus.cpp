#include <iostream>
#include <string>
#include <cmath>

using std::string;
using std::cout;
using std::endl;
using std::stod;


double mySin(double x);
double myCos(double x);
double mySqrt(double x);

/***
    Args:
        x (double): a number
    Returns:
        double: cosine of x
***/
double myCos(double x) 
{
    double tmp = 1, ans = 1;
    int dau = 1;

    for(int i = 0; i < 100; i ++) {
        dau *= -1;
        tmp = tmp * x * x / ((i * 2 + 1) * (i * 2 + 2));
        ans += dau * tmp;
    }
    return ans;
}

/***
    Args:
        x (double): a number
    Returns:
        double: sine of x
***/
double mySin(double x)
{
    double tmp = x, ans = x;
    int dau = 1;

    for(int i = 1; i < 100; i ++) {
        dau *= -1;
        tmp = tmp * x * x / ((i * 2) * (i * 2 + 1));
        ans += dau * tmp;
    }
    return ans;
}


/***
    Args:
        x (double): a number
    Returns:
        double: square root of x
***/
double mySqrt(double x) {
    if (x < 0) {
        cout << "Invalid argument" << endl;
        exit(1);
    }

    double result = x;

    for(int i = 0; i < 100; i ++){
        result = (result + x / result) / 2;
    }
    
    return result;
}