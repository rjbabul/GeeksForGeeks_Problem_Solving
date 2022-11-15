

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
	queue<char> q;
	vector<string > st;
	string str,stt;
	int s;
	for(int i=1;i<=N;i++){
        s=i;
        while(s){
            if(s%2==0)str+='0';
            else str+='1';

            s=s/2;
        }

        reverse(str.begin(), str.end());

        st.push_back( str);
        str.clear();
	}
	return st;
}
