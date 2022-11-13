
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        typedef long long int ll;
        // Your code here
        int l=0, r=1;
        vector<int> vt;
        if(s==(ll) 0){
            vt.push_back(-1);
            return vt;
        }



        bool flag= false;
        long long  sum=0;
        sum+= (ll)arr[0];

        if(sum==s){
            vt.push_back(1);
            vt.push_back(1);
            return vt;
        }

        while(r<n && !flag){

            sum+=arr[r];
            if(sum>s)
            while(l<=r && sum>s){
                sum-=(ll) arr[l++];
            }

            if(sum==s) {

                flag=true;
                break;
            }
            r++;

        }
        if(flag){
            vt.push_back(l+1);
            vt.push_back(r+1);
        }
        else vt.push_back(-1);
        return vt;


    }
};
