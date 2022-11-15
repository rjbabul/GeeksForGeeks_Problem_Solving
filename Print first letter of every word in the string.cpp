
class Solution{
public:

	string firstAlphabet(string S)
	{
	   string str;
	   int n ;
	   n=S.length();
	   int i=0;
	   while(S[i]<'a' || S[i]>'z')i++;

	   str+=S[i++];
	   for(;i<n;i++){
	       if(S[i]>='a' && S[i]<='z' && S[i-1]==' ')str+=S[i];
	   }
	   return str;
	}
};
