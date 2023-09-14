
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
int nqn[11][11];
int coln[11], d1[25], d2[25];
class Solution{
public:

    void helper(int row,int n, vector<int>vt, vector<vector<int> > &ans)
    {
        if(vt.size()==n)
        {
            ans.push_back(vt);
            return ;
        }

        for(int i=0;i<n;i++)
        {
            if(!(coln[i]  || d1[row+i] || d2[n+row-i]))
            {
                vt.push_back(i+1);
                coln[i]= d1[row+i]= d2[n+row-i]=1;
                helper(row+1, n , vt, ans);
                vt.pop_back();
                coln[i]=d1[row+i]=d2[n+row-i]=0;
            }
        }

    }
    vector<vector<int>> nQueen(int n) {
        vector<int>vt ;
        vector<vector<int> > ans ;

        memset(coln, 0, sizeof(coln));
        memset(d1, 0, sizeof(d1));
        memset(d2, 0, sizeof(d2));

        helper(0, n, vt, ans);

        return ans ;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends
