
int max_sum(int A[],int N)
{

int ans, sum;
sum=0, ans=0;
for(int i=0;i<N; i++) {
    ans+= (A[i]*i);
    sum+= A[i];
}
int mx =0;
for(int i=0;i<N;i++){
    mx=max(mx, (N-1)*A[i] + (ans-(sum-A[i])));
    ans= (N-1)*A[i] + (ans-(sum-A[i]));
}
return mx;
}
