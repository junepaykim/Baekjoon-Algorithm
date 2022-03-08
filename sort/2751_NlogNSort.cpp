#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() 
{
    int inputNumbers{};
    cin >> inputNumbers;

    int * myArray = new int[inputNumbers];

    for(int i=0; i<inputNumbers; i++)
    {
        cin >> *(myArray+i);
    }
    
    sort(myArray, myArray+inputNumbers);

    string answer{""};

    for(int i=0; i<inputNumbers; i++)
    {
        answer += to_string(*(myArray+i)) + "\n";
    }

    answer = answer.substr(0, answer.length()-1);

    cout << answer;

    delete[] myArray;
    return 0;
}