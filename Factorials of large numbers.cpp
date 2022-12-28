//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
  vector<int> call(vector<int> st, int n)
  {
      vector<int> str;
      int r, p=0;
      int m = st.size();
      for(int i=0;i<m;i++)
      {
          r= (st[i])*n + p;
          str.push_back( r % 10  );
          p= r/10;

      }
      while(p)
      {
          str.push_back(p %10 );
          p= p/10;
      }


      return str;
  }
    vector<int> factorial(int N){
        // code here
        vector<int> str ;
        str.push_back(1);
        for(int i=1;i<=N;i++)
        {
            str= call(str, i);

        }

        reverse(str.begin(), str.end());


        return str;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}

