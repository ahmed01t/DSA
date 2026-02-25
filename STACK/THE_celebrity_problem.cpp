class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        int n = mat.size(); 
        stack<int> st;
        
        for(int i = n - 1; i >= 0; i--){
            st.push(i);
        }
        
        while(st.size() > 1){
            int first = st.top();
            st.pop();
            int second = st.top();
            st.pop();
            
            // FIX: Simplified elimination logic
            // If first knows second, first cannot be celebrity
            if(mat[first][second] == 1){
                st.push(second);
            }
            // If first doesn't know second, second cannot be celebrity
            else {
                st.push(first);
            }
        }
        
        if(st.empty()){
            return -1;
        }
        
        int num = st.top();
        st.pop();
        
        int rowCount = 0;
        int colCount = 0;
        
        for(int i = 0; i < n; i++){
            // FIX: Skip diagonal elements (a person knowing themselves)
            if(i != num) {
                rowCount += mat[num][i];
                colCount += mat[i][num];
            }
        }
        
        // Final check: knows 0 people and n-1 people know them
        return (rowCount == 0 && colCount == n - 1) ? num : -1;
    }
};