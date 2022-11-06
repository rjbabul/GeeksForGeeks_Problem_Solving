{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string str, string st)
    {

        int strp[257], stp[257];
        memset(strp,0,sizeof(strp));
        memset(stp,0,sizeof(stp));
         int n , m;
         n=str.length();
         m=st.length();
         if(n<m){
          cout<<"-1";
          return "";
      }
     for(int i=0;i<m;i++)stp[st[i]]++;

     int cnt, index, len,l,p;
      cnt=0; index=1; len=n;l=0;

     for(int i=0;i<n;i++){

        if(++strp[str[i]]<=stp[str[i]])cnt++;

        if(cnt== m){
           while( strp[str[l]]>stp[str[l]]   ){
                strp[str[l++]]--;
           }
           p= i-l+1;
        if(len>p){
            index= l,len=p;
        }

        }
     }

      if(index ==-1 || cnt<m){
        cout<<"-1";
        return "";
      }

     else return str.substr(index, len);
    }
};
