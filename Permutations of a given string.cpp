{
	public:


	   int visit[15];
	   int at =0;

	   vector<char > temp;

	   void helper(int at, string s, vector< string  > &str)
	   {

	        if(at==s.length())
		    {

		        string st;
		        for(int i=0;i<temp.size();i++) st+= temp[i];
		        str.push_back(st);
		        return ;

		    }
		    for(int i=0;i<s.length(); i++)
		    {

		        if(i>0 && s[i]== s[i-1] && !visit[i-1])
		             continue;


		      if(!visit[i])
		      {
		           visit[i]=1;
		           temp.push_back(s[i]);

		           helper(at+1,s, str);

		           temp.pop_back();
		           visit[i]=0;
		      }

		    }

	   }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string >  str;
		     sort(S.begin(),S.end());
		    memset(visit, 0, sizeof(visit));

		     helper(0,S,str);

		     return str;

		}
};
