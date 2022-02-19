#include<iostream>
#include <string>

using namespace std;

int main() {
    int inputN{};

    cin >> inputN;

    int * inputSave = new int[2 * inputN];
    int currentK{}, currentN{}, bigK{0}, bigN{0};
    string answer{};

    for(int i=0; i<inputN; i++) {

        cin >> currentK >> currentN;
        
        inputSave[i * 2] = currentK;
        inputSave[i * 2 + 1] = currentN;
        
        if(bigK < currentK) {
            bigK = currentK;
        }
        if(bigN < currentN) {
            bigN = currentN;
        }
    }

    int * array = new int[(bigK+1) * bigN];

    //0 floor clear6
    for(int i=0; i<bigN; i++) {
        array[i] = i+1;
    }

    for(int i=1; i<bigK; i++) {
        array[i * bigN] = 2 >> i-1;
        array[i * bigN + 1] = array[i * bigN] + 2;
    }

    for(int i=0; i<bigK; i++) {
        for(int j=0; j<bigN; j++) {
            array[i * bigN + j] = array[i * (bigN-1) + j] + array[i * bigN + j-1];
        }
    }

    for(int i=0; i<inputN; i++) {
        int ansFloor = inputSave[i * 2];
        int ansRoomN = inputSave[i * 2 + 1];

        answer += to_string(array[bigN * ansFloor + ansRoomN -1]) + "\n";
    }

    for(int i=0; i<bigK; i++) {
        for(int j=0; j<bigN; j++) {
            cout << array[bigN * i + j] <<"\t";
        }
        cout << "\n";
    }

    cout << "\n" << answer.substr(0, answer.length()-1);
    delete[] inputSave;
    delete[] array;
    return 0;
}

//https://www.acmicpc.net/problem/2775
