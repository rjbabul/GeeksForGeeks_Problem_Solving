
class Solution{
    map<int , int > mp;
    stack<int>st;

    priority_queue<int, vector<int> , greater<int> >  q;
    int minEle;
    stack<int> s;
    public:


       int getMin(){


            if(st.empty()) return -1;
  while(!q.empty()){
    int s= q.top();
    if(mp[s]==0) q.pop();
    else{

        return s;
    }
  }
       }


       int pop(){


            if(st.empty()) return -1;
            else{
                int s;
                s=st.top();
                st.pop();
                mp[s]--;
                return s;
            }
       }


       void push(int x){


           st.push(x);
           mp[x]++;
           q.push(x);
       }
};
