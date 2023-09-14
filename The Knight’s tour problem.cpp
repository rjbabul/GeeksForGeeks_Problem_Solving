#include<bits/stdc++.h>
using namespace std;

int xAxis[8]={ 2, 1, -1, -2, -2, -1, 1, 2 };
int yAxis[8]={ 1, 2, 2, 1, -1, -2, -2, -1 };
int sol[100][100];
int cnt=0;
void print(int n)
{
    cout<<cnt<<"  Move No " <<endl;
    for(int i = 0 ; i< n ; i++)
    {
        for(int j=0;j<n;j++)cout<<setw(2)<<sol[i][j]<<" ";
        cout<<endl<<endl;
    }
}

bool isSafe(int x, int y ,int n)
{
    if(x>=0 && x<n && y>=0 && y<n && sol[x][y]==-1)return 1;
    return 0;
}
int backTrack(int row, int col , int visitNo, int n)
{
    cnt++;
    if(visitNo==n*n)
    {
        print(n);
        return 1;
    }

    for(int k = 0; k<8;k++)
    {
        int X_next = row+xAxis[k];
        int Y_next = col+ yAxis[k];

        if(isSafe(X_next, Y_next,n))
        {
            sol[X_next][Y_next]=visitNo;

            if(backTrack(X_next, Y_next,visitNo+1, n)==1)return 1;
            else
            sol[X_next][Y_next]=-1;
        }
    }

    return 0;
}

void solve(int n)
{

    memset(sol,  -1, sizeof(sol));
    sol[0][0]=0;

   int isSuccess= backTrack(0,0,1,n);

}

int main()
{
    int n  ;
    while(cin>>n)
    {
        solve(n);
    }
    return 0;
}
