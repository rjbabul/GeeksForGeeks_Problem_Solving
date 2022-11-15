

class Solution{
public:
int bs(int a[],int l, int r , int k){
 int mid = (l+r)/2;
 if(l<r){
    if(a[mid]==k)return mid;
    else if(a[mid]>k) return bs(a,l, mid, k);
    else return bs(a, mid+1, r, k);
 }

 return -1;

}

    int binarysearch(int arr[], int n, int k){
        int ans ;
         ans = bs(arr, 0, n, k);
         return ans;
    }
};
