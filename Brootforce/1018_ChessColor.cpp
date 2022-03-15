#include<iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N{}, M{};

    cin >> N >> M;

    char * myBoard = new char[N*M];

    for(int j=0; j<M; j++)
    {
        for(int i=0; i<N; i++)
        {
            cin >> myBoard[N * j + i];
        }
    }

    // N = 4 , M = 2
    // MNNN
    // MNNN

    for(int i=0; i<N-8; i++)
    {
        for(int j=0; j<M-8; j++)
        {
            
        }
    }

    delete[] myBoard;
    return 0;
}