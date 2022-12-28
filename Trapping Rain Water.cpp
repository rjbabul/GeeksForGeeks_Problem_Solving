
//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int a[] , int n){
        // code here

         stack< pair< int , int > > q;
        int index=0, h=0, current_h=0, v=0;
        long long int ans=0;

        for(int i=0; i<n-1;i++){
            if(a[i]>=a[i+1]){
                q.push(make_pair(a[i], i));
            }
            else{
                h= a[i+1];
                current_h= a[i];
                index = i+1;

                while(!q.empty()   && q.top().first<=h){

                    v+= (q.top().first -current_h)*(index - q.top().second-1);
                    current_h = q.top().first;
                    q.pop();

                }
                if(!q.empty()) {
                    v+= (h -current_h)*(index - q.top().second-1);
                   // q.top().first = h;
                }

                ans+=(long long int ) v;
                v=0;
            }
        }
     return ans;
    }


};

//{ Driver Code Starts.

int main(){

    int t;
    //testcases
    cin >> t;

    while(t--){
        int n;

        //size of array
        cin >> n;

        int a[n];

        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;

    }

    return 0;
}
// } Driver Code Ends
