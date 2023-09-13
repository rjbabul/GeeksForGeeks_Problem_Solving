//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int count(int coins[], int n, int sum) {

        long long int dp[n+1][sum+1];
        memset(dp, 0, sizeof(dp));
        dp[0][0]=1;
        for(int i = 1; i<=n;i++)
        {
            dp[i][0]=1;
            for(int j=1;j<=sum;j++)
            {
                dp[i][j]=dp[i-1][j];
                if(coins[i-1]<=j) dp[i][j]+=dp[i][j-coins[i-1]];
            }
        }

        return dp[n][sum];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends
