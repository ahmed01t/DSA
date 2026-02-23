#include<iostream>
#include<vector>
#include "stack.h"
using namespace std;
void insert(vector<int>&arr){
stack<int>s;
for(int i=0;i<arr.size();i++){
    if(s.is_empty()){
        s.push(arr[i]);
    }
    else if(arr[i]>=0){
        if(s.peek()>=0){
            s.push(arr[i]);
        }
        else{
            s.pop();
        }
    }
    else{
        if(s.peek()<=0){
            s.push(arr[i]);
        }
        else{
            s.pop();
        }
    }
}
vector<int>ans;
int i=s.is_size()-1;
while(!s.is_empty()){
    ans.push_back(s.peek());
    s.pop();
}
  for(int i = ans.size()-1; i >= 0; i--){
        cout << ans[i] << " ";
    }
}
int main(){
   vector<int>arr(8);
   arr={2,3,5,-4,6,-2,-8,9};
   insert(arr);
}