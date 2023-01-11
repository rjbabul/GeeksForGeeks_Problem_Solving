 #include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int row[4]= {-1,1,0,0};
    int col[4]= {0,0,-1,1};
    int find= false;
    int mask[6][6];
    vector<string> vt;
    string st;

    void helper(vector<vector<int> > &m ,int r, int c, int n)
    {
        if(r<0 || c<0 || c==n || r==n) return ;
        if(r==c && c==n-1)
        {
            vt.push_back(st);

            return ;
        }

         if(r+1<n && m[r+1][c]==1 && !mask[r+1][c])
         {
             st+='D';
             mask[r+1][c]=1;
             helper(m, r+1, c, n);
             mask[r+1][c]=0;
             st.pop_back();
         }
         if(r-1>=0 && m[r-1][c]==1 && !mask[r-1][c])
         {
             st+='U';
             mask[r-1][c]=1;
             helper(m, r-1, c, n);
             mask[r-1][c]=0;
             st.pop_back();
         }

           if(c+1<n && m[r][c+1]==1 && !mask[r][c+1])
         {
             st+='R';
             mask[r][c+1]=1;
             helper(m, r, c+1, n);
             mask[r][c+1]=0;
             st.pop_back();
         }

           if(c-1>=0 && m[r][c-1]==1 && !mask[r][c-1])
         {
             st+='L';
             mask[r][c-1]=1;
             helper(m, r, c-1, n);
             mask[r][c-1]=0;
             st.pop_back();
         }


    }
    vector<string> findPath(vector<vector<int> > &m, int n) {
        // Your code goes here

        memset(mask,0,sizeof(mask));
        mask[0][0]=1;
        st.clear();
        vt.clear();
        helper(m, 0, 0, n);
        if(vt.size()==0 || m[0][0]==0)
         return {"-1"};
        else
            return vt;
    }
};




// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
