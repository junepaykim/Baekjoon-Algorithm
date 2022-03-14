#include<iostream>
#include<algorithm>

using namespace std;

bool WordCompare(const string & s1, const string & s2);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int inputN{};
    cin >> inputN;
    string *myArray = new string[inputN];

    for(int i=0; i<inputN; i++)
    {
        cin >> myArray[i];
    }

    sort(myArray, myArray+inputN, WordCompare);

    string beforeAnswer{""};
    for(int i=0; i<inputN; i++)
    {
        if(beforeAnswer == myArray[i])
        {
            continue;
        }
        else
        {
            cout << myArray[i] << "\n";
            beforeAnswer = myArray[i];
        }
        
    }

    delete[] myArray;
    return 0;
}

bool WordCompare(const string & s1, const string & s2)
{
    bool myReturn{};
    if(s1.length() < s2.length())
    {
        myReturn = true;
    }
    else if(s1.length() == s2.length())
    {
        for(int i=0; i<s1.length(); i++)
        {
            if(s1.at(i) < s2.at(i))
            {
                myReturn = true;
                break;
            }
            else if( s1.at(i) > s2.at(i))
            {
                myReturn = false;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    else
    {
        myReturn = false;
    }
    return myReturn;
}