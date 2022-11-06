using namespace std;
typedef pair<int, int> pi;

vector<int> call(int a[], int n){
  priority_queue<pi, vector<pi> , greater<pi> > q;
  priority_queue< pi > p;
  sort(a, a+n);
  int c=1;
  for(int i=1;i<n;i++){
    if(a[i]==a[i-1])c++;
    else{
        p.push(make_pair(c,a[i-1]));
        c=1;
    }
  }
  p.push(make_pair(c,a[n-1]));
  vector<int> ans;
  int s=0,x,y;
  while(!p.empty()){
    if(p.top().first>=s){
        s= p.top().first;
        q.push(make_pair(p.top().second, p.top().first));
    }
    else{
        while(!q.empty()){
            int s= q.top().second;
            for(int i=0;i<s;i++)ans.push_back(q.top().first);
            q.pop();
        }
        s=p.top().first;
        q.push(make_pair(p.top().second, p.top().first));
    }
    p.pop();
  }
  while(!q.empty()){
            int s= q.top().second;
            for(int i=0;i<s;i++)ans.push_back(q.top().first);
            q.pop();
        }
  return ans;

}
int main()
{
   int t, n, k, m, sum, ans;
    int c;
      int a[200005];
    cin>>t;
    while(t-- && cin>>n){

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
     vector<int > vt =  call(a, n);
     for(int i=0;i<vt.size();i++)cout<<vt[i]<<" ";cout<<endl;
    }
    return 0;
}
