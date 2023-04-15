
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c)
    {
       int visit[r+1][c+1];
       memset(visit, 0, sizeof(visit));
       vector<int> vt;
       int x=0, y=0;
       while(x<r && y<c && !visit[x][y])
       {
           while(y<c && !visit[x][y])
           {
               vt.push_back(matrix[x][y]);
               visit[x][y]=1;
               y++;
           }
           y--;
           x++;

           while(x<r &&  !visit[x][y])
           {
               vt.push_back(matrix[x][y]);
               visit[x][y]=1;
               x++;
           }
           x--;
           y--;
           while( y>=0 && !visit[x][y])
           {
               vt.push_back(matrix[x][y]);
               visit[x][y]=1;
               y--;
           }
           y++;x--;

            while(x>=0 &&  !visit[x][y])
           {
               vt.push_back(matrix[x][y]);
               visit[x][y]=1;
               x--;
           }
           x++, y++;
       }
       return vt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;

    while(t--)
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r);

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
