public:
    long long int largestPrimeFactor(int N){
        // code here
        int mx=0;
        for(int i=2;i*i<=N;i++)
        {
            if(N%i==0)
            {
                mx=i;
                while(N%i==0)N=N/i;
            }
        }
        if(N>1)mx=N;

        return mx;
    }
};
