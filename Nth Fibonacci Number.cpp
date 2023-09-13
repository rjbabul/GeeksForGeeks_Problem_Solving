
//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
int dp[100005];
#define md 1000000007
class Solution {
  public:
  int helper(int n)
  {
      if(n<=1) return dp[n]=n%md;
      if(dp[n]!=-1) return dp[n]%md;
       dp[n]= (helper(n-1)%md+ helper(n-2)%md)%md;
       return dp[n]%md;
  }
    int nthFibonacci(int n){
         memset(dp, -1 , sizeof(dp));
         return helper(n);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
