#include<iostream>
#include<algorithm>

using namespace std;

struct Matrix
{
    int x;
    int y;
};

bool MatrixCompare(const Matrix & m1, const Matrix & m2);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int inputN{};
    cin >> inputN;
    Matrix *myArray = new Matrix[inputN];


    for(int i=0; i<inputN; i++)
    {
        cin >> myArray[i].x >> myArray[i].y;
    }

    sort(myArray, myArray+inputN, MatrixCompare);

    for(int i=0; i<inputN; i++)
    {
        cout << myArray[i].x << " " << myArray[i].y << "\n";
    }

    delete[] myArray;
    return 0;
}

bool MatrixCompare(const Matrix & m1, const Matrix & m2)
{
    bool myReturn{};
    if(m1.x < m2.x)
    {
        myReturn = true;
    }
    else if(m1.x == m2.x)
    {
        if(m1.y < m2.y)
        {
            myReturn = true;
        }
        else
        {
            myReturn = false;
        }
    }
    else
    {
        myReturn = false;
    }
    return myReturn;
}