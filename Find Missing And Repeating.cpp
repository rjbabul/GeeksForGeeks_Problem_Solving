public:
    int *findTwoElement(int *arr, int n) {
         int aa[100005];
       static  int ans[2];
         memset(ans, 0, sizeof(ans));
         memset(aa, 0, sizeof(aa));
         for(int i=0;i<n;i++) aa[arr[i]]++;
         int mis=0, doub=0;
         for(int i=1;i<=n;i++) if(aa[i]==0 && ans[1] ==0) ans[1]=i;
        else if(aa[i]==2 && ans[0]==0) ans[0] = i;
        return ans;
    }
};
