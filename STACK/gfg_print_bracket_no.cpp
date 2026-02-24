// User function template for C++
#include<vector>
#include<stack>
using namespace std;
#include<string>
class Solution {
  public:
    vector<int> bracketNumbers(string str) {
        int count=0;
        // Your code goes here
        vector<int>ans;
        stack<char>st;
        for(int i=0;i<str.size();i++){
            if(str[i]=='('){
                count++;
                st.push(count);
                ans.push_back(count);
            }
            else if(str[i]==')'){
                ans.push_back(st.top());
                st.pop();
            }
        }
        return ans;
    }
};