#include<iostream>

using namespace std;

int main() {
    int weight{}, count{0};

    cin >> weight;
    for(int i=0; i<5; i++) {
        if(weight % 5 == 0) {
            break;
        }
        weight -= 3;
        count ++;
    }
    if(count == 5 || weight < 0) {
        count = -1;
    } else {
        count += weight / 5;
    }
    cout << count;
    return 0;
}