#include <iostream>
#include <string>

using namespace std;

int main() {
    unsigned int answer{};
    unsigned int a{}, b{}, c{};
    int myArray[10] = {};

    cin >> a >> b >> c;

    answer = a * b * c;

    while (answer != 0) {
        myArray[answer%10]++;
        answer /= 10;
    }
    string myAnswer;
    for(int i=0; i<9; i++) {
        myAnswer = myAnswer + to_string(myArray[i]) + '\n';
    }
    myAnswer = myAnswer + to_string(myArray[9]);

    cout << myAnswer;
    return 0;
}