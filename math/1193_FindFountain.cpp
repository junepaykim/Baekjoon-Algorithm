#include<iostream>
using namespace std;

int main() {
    int input{}, count{0}, i{1};
    cin >> input;

    for(; count + i < input; i++) {
        count += i;
    }

    if(i % 2 == 0 ) {
        cout << input-count << "/" << i - input + count + 1;
    } else {
        cout <<  i - input + count + 1 << "/" << input-count;
    }

    return 0;
}