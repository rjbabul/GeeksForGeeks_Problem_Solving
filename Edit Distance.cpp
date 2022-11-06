
class Solution
{

  public:

    int editDistance(string str, string st) {
         int n, m;
   int dp[102][102];
   memset(dp, 0,sizeof(dp));

   n=str.length(); m=st.length();
   for(int i=0;i<=m;i++){
         for(int j=0;j<=n;j++){
            if(i==0) dp[i][j]=j;
         else if(j==0) dp[i][j]=i;

        else if(st[i-1]== str[j-1]) dp[i][j]= dp[i-1][j-1];
        else dp[i][j]=  1 + min(dp[i-1][j],min(dp[i-1][j-1], dp[i][j-1]));
     }
   }

   return  dp[m][n];
    }

};
};
