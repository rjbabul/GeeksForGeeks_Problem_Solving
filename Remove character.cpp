
class Solution {
  public:
    string removeChars(string str, string st) {
        // code here
        int a[27];
        memset(a,0,sizeof(a));
        for(int i=0;i<st.length();i++) a[st[i]-'a']++;
        string s;
        for(int i=0;i<str.length();i++) if(a[str[i]-'a']==0) s+=str[i];
        return s;
    }
};
