#include<iostream>

using namespace std;

int main() {
    int base{}, consume{}, price{}, answer{};

    cin >> base >> consume >> price;

    if(consume < price) {
        cout << (int (base/(price-consume)) + 1);
    } else {
        cout << -1;
    }
    return 0;
}