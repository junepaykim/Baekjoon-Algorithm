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

    int * array = new int[(bigK+2) * bigN];

    for(int i=0; i<bigN; i++) {
        array[i] = i+1;
    }
    for(int i=0; i<bigK+1; i++) {
        array[bigN * i] = 1;
    }

    for(int i=1; i<bigK+1; i++) {
        for(int j=1; j<bigN; j++) {
            array[i * bigN + j] = array[(i-1) * bigN + j] + array[i * bigN + j-1];
        }
    }

    for(int i=0; i<inputN; i++) {
        int ansFloor = inputSave[i * 2];
        int ansRoomN = inputSave[i * 2 + 1];

        answer += to_string(array[bigN * ansFloor + ansRoomN -1]) + "\n";
    }


    //디버깅용 출력단
    
    // cout << "\n";
    // for(int i=bigK-1; 0<=i; i--) {
    //     cout << i << "\t" ;
    //     for(int j=0; j<bigN; j++) {
    //         cout << array[bigN * i + j] <<"\t";
    //     }
    //     cout << "\n";
    // }

    //정답
    cout << answer.substr(0, answer.length()-1);
    delete[] inputSave;
    delete[] array;
    return 0;
}

//https://www.acmicpc.net/problem/2775
