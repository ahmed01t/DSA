
class Solution {
public:
    void reverseString( s) {
        int start=0;
        int end=s.size()-1;
        for (int i=start;i<=end;i++){
            int temp=s[i];
            s[i]=s[end];
            s[end]=temp;
            end--;
        }
         for (int i=0;i<=end;i++){
            cout<<s[i];
        }
    }
};
//Write a function that reverses a string. The input string is given as an array of characters s.

//You must do this by modifying the input array in-place with O(1) extra memory.