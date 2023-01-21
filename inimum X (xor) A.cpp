//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int bitCount(int n )
{
    int cnt=0;
    while(n)
    {
        cnt+= n&1;
        n>>=1;
    }

    return cnt;
}
    int minVal(int a, int b) {
         int bita= bitCount(a);
     int bitb= bitCount(b);

        if(bita==bitb)
        {
            return a;
        }
        if(bitb>bita)
        {
            int i=0;
            while(bitb>bita)
            {
                int bb = a&(1<<i);

                if(bb==0)
                {
                    bitb--;
                    a =a| (1<<i);
                }
                i++;

            }

        }

         if(bitb<bita)
        {
            int i=0;
            while(bitb<bita)
            {
                int bb = a&(1<<i);
                if(bb>0)
                {
                    bita--;
                    a^= (1<<i);
                }
                i++;
            }

        }



        return a;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends
