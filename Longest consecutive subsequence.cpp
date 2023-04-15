
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      sort(arr, arr+N);
      int mx=1;
      int visit[N];
      memset(visit, 0, sizeof(visit));
      visit[0]=1;
      for(int i=1;i<N;i++)
      {
          if(arr[i]==arr[i-1]) visit[i]=visit[i-1];
          else if(arr[i]== arr[i-1]+1) visit[i]= visit[i-1]+1;
          else visit[i]=1;
          mx= max(mx, visit[i]);
      }
      return mx;

    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }

    return 0;
}
// } Driver Code Ends
