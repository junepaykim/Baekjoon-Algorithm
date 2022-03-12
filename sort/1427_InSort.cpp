#include<iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int myArray[10]{};

    string input{};

    cin >> input;

    for (int i=0; i<input.length(); i++)
    {
        myArray[input[i]-'0']++;
    }
    
    for(int i=9; 0<=i; i--)
    {
        for(int j=0; j<myArray[i]; j++)   
        {
            cout << i;
        }
    }
    return 0;
}