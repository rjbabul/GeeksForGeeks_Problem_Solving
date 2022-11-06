    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    typedef long long int ll;
    long long int b[1000005];

    long long maxSubarraySum(int arr[], int n){

        // Your code here
        ll mx=arr[0]; b[0]=arr[0];
        for(int i=1; i<n; i++)
        {
            b[i]=max((ll)arr[i],b[i-1]+(ll)arr[i]);
            mx=max(mx, b[i]);

        }
        return mx;

    }
};
