  public:
    /*You are required to complete below function */
    string multiplyStrings(string str, string st) {
       //Your code here
      string ans;
 int a[2000004];
  memset(a, 0 , sizeof(a));
   int p=0,pos =0,r;
   int stpo=0, strpo=0;
   if(str[0]=='-' && st[0]!='-'){
    strpo=1;ans+="-";
   }
   if(st[0]=='-' && str[0]!='-'){
    stpo=1; ans+="-";
   }
   if(str[0]=='-' && st[0]=='-')stpo= strpo=1;

  for(int i=str.length()-1,k =0; i>=strpo;i--,k++){
        int index = k;
     for(int j= st.length()-1; j>=stpo; j--){

        a[index]+= (p+((str[i]-'0')*(st[j]-'0')) )%10;

        p=(p+(str[i]-'0')*(st[j]-'0'))/10+ a[index]/10 ;
        a[index]= a[index]%10;
        index++;
     }
     while(p){
        a[index]+= p%10;
        p/=10;
        index++;
     }
     pos = index;
  }
int s=0;
  int i=pos-1;
  while(a[i]==0)i--;
  for(;i>=0;i--){
    ans+=(char) (a[i]+'0');
    s+=a[i];
  }
  if(s>0)
  return ans;
  else return "0";
    }

};
