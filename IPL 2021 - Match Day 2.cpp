
 int mp[1000005];
  public:

    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
         vector<int>vt,a;
         a.push_back(0);
         for(int i=0;i<n;i++) a.push_back(arr[i]);
          memset(mp,0,sizeof(mp));
         int total=0, mx=0;
         priority_queue<int> q;
         for(int i=1;i<=n;i++){
          mp[a[i]]++;
         total++;
          q.push(a[i]);
          if(total>=k){
         mp[a[i-k]]--;
         while(mp[q.top()]==0)q.pop();

        vt.push_back(q.top());
     }
   }
   return vt;
    }
};
