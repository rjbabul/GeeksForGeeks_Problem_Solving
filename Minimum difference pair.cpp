
	public:
   	int  minimum_difference(vector<int>vt){
   	    int mn = INT_MAX;
   	    sort(vt.begin(), vt.end());
   	   	for(int i=1;i<vt.size();i++) mn=min(mn, abs(vt[i]-vt[i-1]));

 	return mn;
   	}
};
