#include<iostream>
#include<vector>
#include "stack.h";
using namespace std;
void remove(vector<string>v1){
stack<string>s1;
for(int i=0;i<v1.size();i++){
    if(s1.is_empty()){
        s1.push(v1[i]);
    }
    else if(s1.peek()==v1[i]){
        s1.pop();
    }
    else{
        s1.push(v1[i]);

    }
}
while(!s1.is_empty()){
    cout<<s1.peek()<<" ";
    s1.pop();
}
}
int main(){

    vector<string>v1;
    v1={"ab","ac","da","da","ac","db","ea"};
    remove(v1);

}