
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int call(int a[], int n, int k){

        sort(a, a+n);
        return a[k-1];
    }
    int kthSmallest(int arr[], int l, int r, int k) {
        return call(arr,r+1, k );
    }
};
