#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int inputN{};
    cin >> inputN;
    int *myArray = new int[inputN];
    int *origArray = new int[inputN];

    for(int i=0; i<inputN; i++)
    {
        cin >> myArray[i];
        origArray[i] = myArray[i];
    }

    sort(myArray, myArray+inputN);

    //이중포인터를 사용해서,
    //for문 순회하면서 시작!

    for(int i=0; i<inputN; i++)
    {
        //cout << myArray[i].age << " " << myArray[i].name << "\n";
    }

    delete[] myArray, origArray;
    return 0;
}