
class Solution{
public:
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        int dp[N+1][N+1];
        memset(dp,0,sizeof(dp));
        dp[0][0]= Matrix[0][0];
        for(int i=0;i<N;i++)dp[0][i]=Matrix[0][i];

        for(int i=0;i<N-1;i++){
            for(int j=0;j<N;j++){
                 dp[i+1][j] = max(dp[i+1][j], dp[i][j]+ Matrix[i+1][j]);
                 if(j>0) dp[i+1][j-1] = max(dp[i+1][j-1], dp[i][j]+ Matrix[i+1][j-1]);
                 if(j<N-1) dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j]+ Matrix[i+1][j+1]);
            }
        }
        int ans=0;
        for(int i=0;i<N;i++) ans= max(ans,dp[N-1][i]);
        return ans;

    }
};
