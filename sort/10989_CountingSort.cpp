#include<iostream>

using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int inputN{};
    
    cin >> inputN;
    int myArray[10001]{}, temp{};

    for(int i=0; i<inputN; i++)
    {
        cin >> temp;
        myArray[temp]++;
    }

    int count{0};

    for(int i=0; count<inputN; i++)
    {
        for (int j=0; j<myArray[i]; j++)
        {
            count++;
            cout << i << "\n";
        }
    }
    return 0;
}

//https://www.acmicpc.net/problem/10989