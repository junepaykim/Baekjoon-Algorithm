#include<iostream>
#include<string>
#include<cmath>

using namespace std;

#define RANGE   8001

int FindMiddle(int * myArray, int inputNumbers);

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int inputNumbers{};
    cin >> inputNumbers;

    int myArray[RANGE+1]{}, temp{};

    for(int i=0; i<inputNumbers; i++)
    {
        cin >> temp;
        myArray[RANGE/2+temp]++;
    }

    int maxFrequent{RANGE}, rangeLow{RANGE-1}, rangeHigh{0}, maxCount{0};
    bool maxFreqFixed{false};
    long double average{0};

    *(myArray+maxFrequent) = 1;
    for(int i=0; i<RANGE; i++)
    {
        if(*(myArray+i) != 0)
        {
            rangeHigh = i;
        }
        if(rangeLow == RANGE-1 && *(myArray+i) != 0)
        {
            rangeLow = i;
        }

        if(*(myArray + i) > *(myArray+maxFrequent))
        {
            maxFrequent = i;
            maxFreqFixed = false;
        }
        else if (*(myArray+i) == *(myArray+maxFrequent) && !maxFreqFixed)
        {
            maxFrequent = i;
            maxFreqFixed = true;
        }

        average += *(myArray+i) * (i);
    }

    if(*(myArray+maxFrequent) == 1)
    {
        maxFreqFixed = false;
        for(int i=0; i<RANGE; i++)
        {
            if(*(myArray+i) == 1 && !maxFreqFixed)
            {
                maxFrequent = i;
                maxFreqFixed = true;
            }
            else if(*(myArray+i) == 1 && maxFreqFixed)
            {
                maxFrequent = i;
                break;
            }
        }
    }

    //Test code for Print Array(Just find meaningful datas)

    // cout << "\n";
    // for(int i=0; i<RANGE; i++)
    // {
    //     if(*(myArray+i) != 0)
    //     {
    //         cout << i-RANGE/2 << " : " << *(myArray+i) << "\n";
    //     }
    // }
    // cout << "\n";
    
    int middle = FindMiddle(myArray, inputNumbers);
    
    average = (average - RANGE/2 * inputNumbers) / inputNumbers;
    average = floor(average + 0.5);

    cout << average << "\n" << middle-4000 << "\n" << maxFrequent-RANGE/2 << "\n" << rangeHigh - rangeLow;

    return 0;
}


int FindMiddle(int * myArray, int inputNumbers)
{
    int answer{}, middleSum{0};

    if(inputNumbers % 2 != 0)
    {
        //odd logic
        for(int i=0; i < RANGE; i++)
        {
            if(middleSum + *(myArray+i) >= inputNumbers/2 + 1)
            {
                answer = i;
                break;
            }
            else
            {
                middleSum += *(myArray+i);
            }
        }
    }
    else
    {
        for(int i=0; i < RANGE; i++)
        {
            if(middleSum + *(myArray+i) > inputNumbers/2 + 1)
            {
                answer = i;
                break;
            }
            if(middleSum + *(myArray+i) == inputNumbers/2)
            {
                for(int j=i+1; j < RANGE; j++)
                {
                    if(*(myArray+j) != 0)
                    {
                        //Might not work because I don't think about float point precisely
                        //Because the question just asks for input number of odd case. So, this code actually never used.
                        answer = (i + j) / 2;
                        break;
                    }
                }
                break;
            }
            else
            {
                middleSum += *(myArray+i);
            }
        }
    }
    return answer;
}