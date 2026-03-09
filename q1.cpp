class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        int num = 0;
        char op = '+';

        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
            {
                num = num*10 + (s[i]-'0');
            }

            if(!isdigit(s[i]) && s[i]!=' ' || i==s.size()-1)
            {
                if(op=='+') st.push(num);
                else if(op=='-') st.push(-num);
                else if(op=='*')
                {
                    int a = st.top(); st.pop();
                    st.push(a*num);
                }
                else if(op=='/')
                {
                    int a = st.top(); st.pop();
                    st.push(a/num);
                }

                op = s[i];
                num = 0;
            }
        }

        int ans = 0;
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};