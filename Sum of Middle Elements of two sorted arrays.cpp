
class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n) {

            int a[n*2+1];
            int l1=0, r1=0,j=0;
            while(l1<n && r1<n)
            {
                if(ar1[l1]<ar2[r1]) a[j++]= ar1[l1++];
                else a[j++]= ar2[r1++];

            }
             while(l1<n  )
            {
                a[j++]= ar1[l1++];

            }
             while( r1<n)
            {
             a[j++]= ar2[r1++];
            }
            return a[n]+a[n-1];
    }
};
