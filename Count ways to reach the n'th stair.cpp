#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:

    #define md  1000000007
    int temp[1000005];
    int way(int n)
    {

        if(n==0) return temp[n]= 1%md;
        if(n<0)return  0;
         if(temp[n])return temp[n]%md;
        else return temp[n]= (way(n-1)+ way(n-2))%md;
    }

    int countWays(int n) {
        return way(n);
    }


};


int main()
{

    int t;
    cin >> t;
    while(t--)
    {

        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl;
    }
    return 0;
}
