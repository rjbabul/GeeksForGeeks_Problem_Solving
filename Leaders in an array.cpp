

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here

        vector<int > vt;
        vt.push_back(a[n-1]);
        int mx= a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(mx<=a[i])
            {
                mx= a[i];
                vt.push_back(a[i]);
            }
        }
        reverse(vt.begin(), vt.end());
        return vt;
    }
};
