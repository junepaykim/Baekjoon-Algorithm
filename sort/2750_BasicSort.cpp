#include<iostream>

using namespace std;

int main() 
{
    int inputN{};
    cin >> inputN;

    int myArray[1000] {}, temp{};
    for(int i=0; i<inputN; i++)
    {
        cin >> myArray[i];
        for(int j=i; 1<=j; j--)
        {
            if(myArray[j] < myArray[j-1])
            {
                temp = myArray[j];
                myArray[j] = myArray[j-1];
                myArray[j-1] = temp;
            }
        }
    }
    for(int i=0; i<inputN; i++)
    {
        cout << myArray[i] << "\n";
    }
    return 0;
}