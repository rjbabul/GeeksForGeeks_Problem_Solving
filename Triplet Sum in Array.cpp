    public:

    bool check(int a[], int l, int r, int x)
    {
        if(l<r)
        {
            int mid= (l+r)/2;
            if(a[mid]==x)return 1;
            else if(a[mid]>x)
               return check(a, l, mid, x);
             else return check(a, mid+1, r, x);
        }
        return 0;
    }
    void heapify(int A[], int n, int at)
    {
        int mn=at;
        int l = at*2+1;
        int r = at*2+2;
        if(l<n && A[l]>A[mn]) mn = l;
        if(r< n  && A[r]>A[mn])mn= r;

        if(mn!=at)
        {
            swap(A[mn], A[at]);
            heapify(A, n, mn);
        }
    }

    void heap(int A[], int n)
    {
        for(int i= n/2-1;i>=0; i--) heapify(A, n, i);

        for(int j=n-1;j>0;j--)
        {
            swap(A[0], A[j]);
            heapify(A, j, 0);
        }
    }
    bool find3Numbers(int A[], int n, int X)
    {

        int cnt=0;
        heap(A,n);

        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {

                int temp= A[i]+A[j];

                if(check(A,j+1, n, X-temp)==1)
                {

                    return 1;

                }
            }
        }
        return 0;
    }

};
