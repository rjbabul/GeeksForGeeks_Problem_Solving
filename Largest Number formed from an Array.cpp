class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	static bool cmp(string a, string b)
	{
	    return a+b>b+a;
	}
	string printLargest(vector<string> &arr) {
	    // code here

	    sort(arr.begin() , arr.end(), cmp);

	    string str;
	    for(int i=0;i<arr.size();i++) str+= arr[i];


	    return str;
	}
};
