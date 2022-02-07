#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int length{0}, min {1000000}, max{-1000000}, temp{};
    cin >> length;
    
    int *myArray = new int[length];

    for (int i=0; i<length; i++) {
        cin >> temp;
        if(temp < min) min = temp;
        if(max < temp) max = temp;
    }

    cout << min << " " << max;

    delete[] myArray;
    return 0;
}
