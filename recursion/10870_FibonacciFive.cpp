#include<iostream>

using namespace std;

int MyFibonacci(int currentN)
{
    if(currentN == 0)
    {
        return 0;
    } 
    else if (currentN == 1)
    {
        return 1;
    }
    else
    {
        return MyFibonacci(currentN-1) + MyFibonacci(currentN-2);
    }
}

int main()
{
    int input{};
    
    cin >> input;

    cout << MyFibonacci(input);
    return 0;
}