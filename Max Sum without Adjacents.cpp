
int b[1000003];
class Solution{
public:
	// calculate the maximum sum with out adjacent
	int findMaxSum(int a[], int n) {
	    // code here
	    if(n==1) return a[0];
	    memset(b,0,sizeof(b));
       b[0]=a[0]; b[1]=a[1];
       int mx=0;
     mx=max(a[0],a[1]);
 for(int i=2;i<n;i++){
    b[i]= max(b[i-2]+a[i], a[i]+(b[i-1]-a[i-1]));
    mx=max(mx,b[i]);
 }

    return mx;
	}
};
