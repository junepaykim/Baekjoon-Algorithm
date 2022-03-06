#include<iostream>

using namespace std;

int MyFactorial(int currentNumber) 
{
    if (currentNumber == 0)
    {
        return 1;
    }
    else
    {
        return currentNumber * MyFactorial(currentNumber-1);
    }
    
}

int main() 
{
    int input{};

    cin >> input;

    cout << MyFactorial(input);

    return 0;
}