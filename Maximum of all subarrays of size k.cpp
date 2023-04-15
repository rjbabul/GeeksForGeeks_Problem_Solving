//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        int l =0, r=k-1;
        priority_queue< pair< int, int > > q;
        for(int i=0;i<k;i++) q.push({arr[i], i});

        vector<int> vt;
        while(r<n)
        {
            while(!q.empty() && q.top().second<l) q.pop();
            vt.push_back(q.top().first);
            r++; l++;
            if(arr[r]>q.top().first)
            {
                while(!q.empty()) q.pop();
            }
            q.push({arr[r], r});

        }

        return vt;

    }
};

//{ Driver Code Starts.

int main() {

	int t;
	cin >> t;

	while(t--){

	    int n, k;
	    cin >> n >> k;

	    int arr[n];
	    for(int i = 0;i<n;i++)
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++)
	        cout << res[i] << " ";
	    cout << endl;

	}

	return 0;
}
// } Driver Code Ends
