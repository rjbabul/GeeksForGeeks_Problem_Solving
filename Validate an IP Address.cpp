
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
     int check(string str)
     {
         int num=0;
         for(int i=0;i<str.length();i++)
         {
             num = ( num*10)+(str[i]-'0');
         }
         return num;

     }
        int isValid(string s) {
            // code here
            string str;
            int cnt=0;
            bool flag=true;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='.')
                {
                    if(str.length()==0) flag=false;
                    int k = check(str);
                    if(str.length()>3) flag=false;
                    if(str[0]=='0' && str.length()>1) flag=false;
                    if(k<0 || k>255) flag= false;

                    else cnt++;

                    str.clear();
                }
                else if(s[i]>='0' && s[i]<='9') str+=s[i];
                else flag= false;
            }

            if(str.length()>0) {
                if(str.length()>3) flag=false;
                    if(str[0]=='0' && str.length()>1) flag=false;
                cnt++;
                 int k = check(str);

                 if(k<0 || k>255) flag= false;
                 if(str.length()==0) flag=false;
            }
            else flag=false;


            return flag && cnt==4;

        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends
