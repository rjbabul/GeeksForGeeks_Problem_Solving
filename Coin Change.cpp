  public:
    long long int count(int coins[], int N, int sum) {

        // code here.
        long long int dp[N+1][sum+1];
        memset(dp, 0,sizeof(dp));
        for(int i=0;i<N;i++) dp[i][0]=1;

        for(int i=1;i<=N;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                dp[i][j]= dp[i-1][j];
                if(j>=coins[i-1])
                dp[i][j]+= dp[i][j-coins[i-1]];
            }
        }
        return dp[N][sum];
    }
};
