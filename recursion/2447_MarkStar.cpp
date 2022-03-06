#include<iostream>

using namespace std;

string blankMaker(int currentN)
{
    return "";
}

string myStar(int currentN)
{
    string currentReturn{""};
    if(currentN == 3)
    {
        currentReturn = "***\n* *\n***";
    }
    else
    {        
        currentReturn = 
            myStar(currentN/3) + myStar(currentN/3) + myStar(currentN/3) + "\n"
            + myStar(currentN/3) + myStar(currentN/3) + myStar(currentN/3) + "\n"
            + myStar(currentN/3) + myStar(currentN/3) + myStar(currentN/3);

    }
    return currentReturn;
}

int main()
{
    int input{};

    cin >> input;

    cout << myStar(input);
    return 0;
}