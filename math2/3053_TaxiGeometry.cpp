#include<iostream>
#define _USE_MATH_DEFINES
#include<math.h>

using namespace std;

int main() {
    long double input{};

    cin >> input;

    long double circle {input * input * M_PI};
    long double taxiCircle {input * input * 2};

    cout << fixed << circle << "\n" << taxiCircle;
    return 0;
}