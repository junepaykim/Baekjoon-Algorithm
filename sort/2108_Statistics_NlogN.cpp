#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() 
{
    int inputNumbers{};
    cin >> inputNumbers;

    int * myArray = new int[inputNumbers+1];

    for(int i=1; i<inputNumbers+1; i++)
    {
        cin >> *(myArray+i);
    }
    
    sort(myArray, myArray+inputNumbers);

    int middle{}, average{0}, currentFrequent{}, maxFrequent{0}, rangeLow{4000}, rangeHigh{0};
    *(myArray) = -1;

    for(int i=1; i<inputNumbers; i++)
    {
        if(*(myArray+i-1) != *(myArray+i))
        {
            maxFrequent = currentFrequent > maxFrequent ? currentFrequent : maxFrequent;
            currentFrequent = 0;
        }
        else
        {
            currentFrequent ++;
        }
        average += *(myArray+i);
        rangeLow = *(myArray+i) < rangeLow ? *(myArray+i) : rangeLow;
        rangeHigh = *(myArray+i) > rangeHigh ? *(myArray+i) : rangeHigh;
    }
    if(inputNumbers % 2 == 0)
    {
        middle = *(myArray + inputNumbers / 2) + *(myArray + inputNumbers / 2 + 1);
        middle /= 2;
    }
    else
    {
        middle = *(myArray + inputNumbers / 2 + 1);
    }
    //Last case
    maxFrequent = currentFrequent > maxFrequent ? currentFrequent : maxFrequent;
    
    cout << average << "\n" << middle << "\n" << maxFrequent << "\n" << rangeHigh - rangeLow;

    delete[] myArray;
    return 0;
}