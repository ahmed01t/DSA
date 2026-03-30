#include<queue>
#include<iostream>
#include<stack>
using namespace std;
class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        stack<int>st;
        for(int i=0;i<k;i++){
            st.push(q.front());
            q.pop();
        }
        int n=q.size();
      while(!st.empty()){
          q.push(st.top());
          st.pop();
      }
      while(n--){
          q.push(q.front());  
          q.pop();
      }
        return q;
    }
};  







