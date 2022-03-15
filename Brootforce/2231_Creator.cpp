#include<iostream>
using namespace std;

int main()
{
    int inputN{}, temp{0}, currentSum{0}, i{0};
    cin >> inputN;

    for (; i<=inputN; i++)
    {
        temp = i;
        while(temp != 0)
        {
            currentSum += temp%10;
            temp /= 10;
        }
        if(currentSum == inputN)
        {
            break;
        }
        else
        {
            currentSum = i+1;
        }
    }
    //cout << "\n" << currentSum<< " " << i << "\n";
    if(currentSum == inputN)
    {
        cout << i;
    }
    else
    {
        cout << 0;
    }
    return 0;
}
//https://www.acmicpc.net/submit/2231