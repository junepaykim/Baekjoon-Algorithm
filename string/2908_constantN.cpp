#include<iostream>

using namespace std;

int main() {
    int first{}, second{};
    cin >> first >> second;

    first = first % 10 * 100
    + (first / 10 - first / 100 * 10) * 10
    + first / 100;
    
    second = second % 10 * 100
    + (second / 10 - second / 100 * 10) * 10
    + second / 100;

    cout << (first > second ? first : second);
    return 0;
}