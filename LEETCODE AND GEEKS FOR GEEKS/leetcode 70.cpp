class Solution {
public:
    int climbStairs(int n) {
      if (n==0||n==1){
        return 1;
      }
      int first=1;
      int second=1;
      int result=0;
      for (int i=2;i<=n;i++){
        result=first+second;
        first=second;
        second=result;
      }
      return result;
    }
};
//You are climbing a staircase. It takes n steps to reach the top.

//Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?