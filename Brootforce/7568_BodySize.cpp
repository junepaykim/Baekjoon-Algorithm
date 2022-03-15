#include<iostream>

using namespace std;

int main()
{
    int inputN{};
    cin >> inputN;

    int * myArray = new int[50] {};
    int * storage = new int[inputN * 2];

    for (int i=0; i<inputN; i++)
    {
        cin >> storage[i*2] >> storage[i*2 + 1];
    }

    for(int i=0; i<inputN; i++)
    {
        for(int j=i+1; j<inputN; j++)
        {
            if(storage[i*2] < storage[j*2] && storage[i*2+1] < storage[j*2+1])
            {
                myArray[i]++;
            }
            else if(storage[i*2] > storage[j*2] && storage[i*2+1] > storage[j*2+1])
            {
                myArray[j]++;
            }
        }
    }

    for(int i=0; i<inputN; i++)
    {
        cout << myArray[i]+1 << " ";
    }

    delete[] myArray, storage;
    return 0;
}