
{
    if(n==0 && m==0)return 0;
    if(n==1 || m==1) return 1;
    long long int dp[13][13];
    memset(dp, 0,sizeof(dp));
    dp[1][1]=1;
    dp[0][1]=1;
    long long int ans =1;

    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){

            dp[i][j]= (dp[i-1][j]+dp[i][j-1]);

            if(i==1 || j==1) ans+= dp[i][j];
            else ans+= dp[i][j];
        }
    }
    return ans;
    // Code Here
}
