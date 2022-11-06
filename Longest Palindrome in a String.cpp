public:
int mx =1;
int dp[1003][1003];
int helper(string s)
{
    for(int i=0; i<s.length(); i++)
        dp[i][i]=1;
    int cnt=1,pos=0;
    int n = s.length();
    for(int i=1; i<n; i++)
    {
        int flag =0;
        for(int j=0; j<n; j++)
        {
            if(j+cnt<n && s[j]==s[j+cnt])
            {
                if(cnt==1)
                {

                    dp[j][j+cnt]=1;
                    if(!flag)
                    {
                        pos= j;
                        mx= cnt+1;
                        flag=1;
                    }

                }
                else  if(dp[j+1][j+cnt-1]==1)
                {
                    dp[j][j+cnt]=1;

                    if(!flag)
                    {
                        flag=1;
                        pos= j;
                        mx= cnt+1;
                    }
                }
            }
        }

        cnt++;

    }
    return pos;
}
string longestPalin (string S)
{

    mx=1;
    memset(dp, 0, sizeof(dp));
    int pos= helper(S);
    return S.substr(pos, mx);
}
};
