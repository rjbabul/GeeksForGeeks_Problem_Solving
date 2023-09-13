//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
#define md  1000000007
int mp[10005];
class Solution{
	public:

	   int helper(int n,int mp[])
	   {
	       if(mp[n]!=-1) return mp[n]%md;

	       if(n<0)return 0;
	       if(n==0)return mp[n]=1%md;

	       return mp[n]= (helper(n-1,mp)%md+ helper(n-2,mp)%md)%md;
	   }
		int nthPoint(int n){


		     memset(mp, -1, sizeof(mp));
		    return helper(n,mp);
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
