#include<iostream>
#include<string>

using namespace std;

int main() {
    int input_numbers {};

    cin >> input_numbers;

    int H{}, W{}, customer_number{};
    int floor{}, room_number{};
    string answer{};

    for(int i=0; i<input_numbers; i++) {
        cin >> H >> W >> customer_number;

        if(customer_number % H != 0) {
            floor = customer_number % H;
            room_number = customer_number / H + 1;
        } else {
            floor = H;
            room_number = customer_number / H;
        }  
        answer += to_string(100 * floor + room_number) + "\n";
    }

    cout << answer.substr(0, answer.length()-1);

    return 0;
}