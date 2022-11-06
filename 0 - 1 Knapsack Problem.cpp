
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
   typedef pair<int, int > pr;
    int npsk(int w, int c[], int v[], int n){

   int dp[104][104];
   memset(dp, 0, sizeof(dp));

   for(int i=1;i<=n;i++){
    for(int j=0;j<=w;j++){
        if(c[i]>j) dp[i][j]= dp[i-1][j];
        else dp[i][j]=max(dp[i-1][j], v[i]+ dp[i-1][j-c[i]]);
    }
   }

   return dp[n][w];

}
    int knapSack(int w, int c[], int v[], int n)
    {
       priority_queue< pr,vector<pr>, greater<pr> > q;
   for(int i=0;i<n;i++) q.push(make_pair(c[i], v[i]));
  int i=1;

   while(!q.empty()){
     c[i]= q.top().first;
     v[i]= q.top().second;
     q.pop();
     i++;
   }
    return npsk(w,c, v, n);
    }
};
