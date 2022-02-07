#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//slight better that original takes 456ms but it takes 336ms
//much more memory consumpiton 2020kb vs 16980kb
//That just scanf(&d) blabla is much better that those codes take 171ms
//So... It's not a good way but not too bad I think.

int main(int argc, char* argv[]) {
    int length{0}, min {1000000}, max{-1000000}, temp{};
    string numbers;

    getline(cin, numbers);
    length = stoi(numbers);
    getline(cin, numbers);

    istringstream ss(numbers);
    string stringBuffer;

    for (int i=0; i<length; i++) {
        getline(ss, stringBuffer, ' ');
        temp = stoi(stringBuffer);
        if(temp < min) min = temp;
        if(max < temp) max = temp;
    }

    cout << min << " " << max;

    return 0;
}