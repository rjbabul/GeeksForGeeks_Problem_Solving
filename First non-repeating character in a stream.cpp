//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){

		    map<char , int > mp;
		    queue<char>q;
		    int n= A.length();
		    string res;
		    for(int i=0;i<n;i++)
		    {
		        q.push(A[i]);
		        mp[A[i]]++;
		        while(!q.empty() && mp[q.front()]!=1)
		        {
		            q.pop();
		        }
		        if(!q.empty()) res+= q.front();
		        else res+='#';
		    }
		    return res;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
