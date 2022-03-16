#include<iostream>
using namespace std;

void DFS(int currentN, int M, int N);

int myArr[9] = {0,};
bool visit[9] = {false,};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int M{}, N{};

    cin >> N >> M;
    DFS(0, M, N);
}

void DFS(int currentN, int M, int N)
{
    if(currentN == M)
    {
        for(int i = 0; i < M; i++)
        {
            cout << myArr[i] << ' ';
        }
        cout << '\n';
        return;
    } 
    else 
    {
        for(int i = 1; i <= N; i++)
        {
            if(!visit[i])
            {
                visit[i] = true;
                myArr[currentN] = i;
                DFS(currentN+1, M, N);
                visit[i] = false;
            }
        }
    }
}