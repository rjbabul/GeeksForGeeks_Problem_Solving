
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  bool isPrime[2000005];
   vector<int>vt;
  void check(int mx)
  {
      isPrime[0]= isPrime[1]=1;
      for(int i=4;i<=mx;i+=2) isPrime[i]=1;
      for(int i=3; i<=mx;i+=2)
      {
          if(!isPrime[i])
          {
              for(int j= i*2;j<=mx;j+=i) isPrime[j]=1;
          }
      }

  }

    vector<int> primeRange(int M, int N) {
        // code here

            vt.clear();
             check(N);
             if(M<=2) vt.push_back(2);
             if(M%2==0) M++;

        for(int i=M; i<=N;i+=2) if(!isPrime[i]) vt.push_back(i);


        return vt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}
// } Driver Code Ends
