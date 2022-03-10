#include<iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int cardNumbers{}, aim{};

    cin >> cardNumbers >> aim;

    int myArray[100], temp{}, currentAnswer{0};

    for(int i=0; i<cardNumbers; i++)
    {
        cin >> temp;
        *(myArray+i) = temp;
    }

    int count{0}, countB{0};

    for (int i=0; i<cardNumbers; i++)
    {
        for(int j=i+1; j<cardNumbers; j++)
        {
            for(int k=j+1; k<cardNumbers; k++)
            {
                if(*(myArray+i) + *(myArray+j) > aim)
                {
                    break;
                }
                temp = *(myArray+i) + *(myArray+j) + *(myArray+k);
                if(temp <= aim && temp > currentAnswer)
                {
                    currentAnswer = temp;
                }
            }
        }
    }
    cout << currentAnswer;
}