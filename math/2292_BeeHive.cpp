#include<iostream>
using namespace std;

int main() {
    int input{}, count {1}, range{1};
    cin >> input;

    for (; range<input; count++) {
        range += 6 * count;
    }

    cout << count;
    return 0;
}
