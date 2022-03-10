#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int inputNumbers{};
    cin >> inputNumbers;

    int myArray[8001]{}, temp{};

    for(int i=0; i<inputNumbers; i++)
    {
        cin >> temp;
        myArray[4000+temp]++;
    }

    int middle{}, maxFrequent{0}, rangeLow{8000}, rangeHigh{0};
    bool maxFreqUpdated {false}, maxFreqFixed{false};
    long double average{0};


    //최빈값 수정 필요
    //평균 완료
    //범위 완료
    for(int i=0; i<8001; i++)
    {
        if(!maxFreqFixed)
        {
            if(*(myArray + i) > 0 && *(myArray + i) >= *(myArray+maxFrequent))
            {
                if(!maxFreqUpdated)
                {
                    maxFrequent = i;
                    maxFreqUpdated = true;
                }
                else
                {
                    maxFrequent = i;
                    maxFreqFixed = true;
                }
            }
        }

        average += *(myArray+i) * (i);

        if(*(myArray+i) != 0)
        {
            rangeHigh = i;
        }
        if(rangeLow == 8000 && *(myArray+i) != 0)
        {
            rangeLow = i;
        }
    }

    if(inputNumbers % 2 == 0)
    {
        middle = *(myArray + inputNumbers / 2 - 1) + *(myArray + inputNumbers / 2 );
        middle /= 2;
    }
    else
    {
        middle = *(myArray + inputNumbers / 2 + 1);
    }
    //Last case
    
    average = (average - 4000 * inputNumbers) / inputNumbers;
    average = floor(average + 0.5);

    cout << "\n" << average << "\n" << middle << "\n" << maxFrequent-4000 << "\n" << rangeHigh - rangeLow;

    return 0;
}