

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {

       int ans=0;
       for(int i=1;i<=n;i++) ans^=i;
       for(int i=0;i<n-1;i++)ans^= array[i];
       return ans;
    }
};
