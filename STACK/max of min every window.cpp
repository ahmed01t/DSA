class Solution {
  public:
    vector<int> maxOfMins(vector<int>& arr) {
        //  code here
        int n=arr.size();
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                int num=INT_MAX;
                for(int k=j;k<j+i+1;k++){
                    num=min(num,arr[k]);
                }
                ans[i]=max(ans[i],num);
            }
        }
        return ans;
    }
};