// in increasing order when heapSort() is called.

class Solution
{
    public:
    //Heapify function to maintain heap property.
    void heapify(int b[], int n, int i)
    {
      // Your Code Here
      int mx=i;
  int l= 2*i+1;
  int r = 2*i+2;

  if(l<n && b[l]>=b[mx])mx = l;
  if(r<n && b[r]>=b[mx])mx=r;

  if(mx!=i) {
    swap(b[mx], b[i]);
    heapify(b,n,mx);
  }
    }


    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
            for(int i=n/2-1 ; i>=0;i--){
            heapify(arr, n,i);
    }
        for(int j=n-1;j>0;j--){
            swap(arr[0], arr[j]);
            heapify(arr,j,0);
        }
    }
};


