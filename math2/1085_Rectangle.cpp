#include<iostream>

using namespace std;

int main() {
    int x{}, y{}, w{}, h{}, ansX{}, ansY{};

    cin >> x >> y >> w >> h;

    if(x < (double)w/2) {
        ansX = x;
    } else {
        ansX = w - x;
    }
    if(y < (double)h/2) {
        ansY = y;
    } else {
        ansY = h - y;
    }
    ansX = ansX < ansY ? ansX : ansY;
    cout << ansX;
    return 0;
}