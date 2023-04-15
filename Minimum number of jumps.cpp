
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

 // Function to return minimum number of jumps to end of array

// Function to return minimum number of jumps to end of array

class Solution{
  public:

    int minJumps(int arr[], int n){
      if(arr[0]==0) return -1;
      if(arr[0]>=n-1)return 1;

      int mxreach = arr[0];
      int step =arr[0];
      int jump =1;

      for(int i=1;i<n;i++)
      {

          mxreach =max(mxreach, i+ arr[i]);

          if(mxreach>=n-1) return jump+1;

          step--;

          if(step==0)
          {
              if(i>=mxreach) return -1;
              jump++;
              step= mxreach-i;

          }

      }
      return -1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends
