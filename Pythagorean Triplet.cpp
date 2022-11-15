
 int  j;
 int  x , a[1004];
 int mx;
 set<int  > st;
 set<int>::iterator it;

class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not


	bool checkTriplet(int arr[], int n) {

	     mx=0;
         map<int, int> mp,ans;
         j=0;
         st.clear();
         for(int i=0;i<n;i++)st.insert(arr[i]);
         for(it=st.begin(); it!=st.end();it++){
             x=*it;
             x=x*x;
             a[j]=x;
             mx=max(mx,x);
             ans[x]++;
             j++;
         }


         int i,k;
        for( i=0;i<j-1;i++){
            for( k=i+1;k<j;k++){
                x=a[i] + a[k];
                if(ans[x]>0)return true;

                if(x>mx){
                    if(i<j-2 && a[i+1]+a[i+2]>mx)return false;
                }
                else continue;
            }
        }
         return false;
	}
};
