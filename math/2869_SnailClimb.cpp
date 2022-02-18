#include<iostream>

using namespace std;

int main() {
    int A{}, B{}, V{}, answer{0}, today{0}, climbPD{};

    cin >> A >> B >> V;

    climbPD = A - B;
    //A = climb per day, B = slip, V = height of wood

    if(V - A <= 0) {
        answer = 1;
    } else {
        answer = ((V-A) % (A-B)) == 0 ? 
            (V - A) / (A - B) + 1 : (V - A) / (A - B) + 2;
    }
    cout << answer;
    return 0;
}