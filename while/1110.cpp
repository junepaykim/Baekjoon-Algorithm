#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    int initial, count {0}, temp {0};
    cin >> initial;
    temp = initial;
    
    do {
        count ++;
        temp = temp%10 * 10 + ((temp % 10 + temp / 10))%10;
    } while (initial != temp);

    cout << count;
    return 0;
}
