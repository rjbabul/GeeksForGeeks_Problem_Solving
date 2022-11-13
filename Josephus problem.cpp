

class Solution
{
    public:
    int josephus(int n, int k)
    {
       map<int, int> mp;
       int c=0,x=0;
      while(x<n-1) for(int i=0;i<n;i++){
           if(mp[i%n]==0)c++;
           if(c==k){
               mp[i%n]++;x++;
               c=0;
           }
           if(x==n-1)break;

       }
       for(int i=0;i<n;i++) if(mp[i]==0) return i+1;
    }
};

