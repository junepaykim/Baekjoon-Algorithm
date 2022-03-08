#include<iostream>

using namespace std;

int main()
{
    int inputN{};
    
    cin >> inputN;
    int myArray[10001], temp{};

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