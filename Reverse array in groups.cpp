

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& a, int n, int k){
        // code here
        int i=0,l,r;
        for( i=0;i+k-1<n;i+=k){
            l=i;
            r=i+k-1;
            while(l<r){
                swap(a[l],a[r]);l++,r--;
            }

        }n--;
        while(i<n){
            swap(a[i],a[n]);
            i++,n--;
        }
    }
};
