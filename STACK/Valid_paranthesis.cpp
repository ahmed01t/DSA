#include<iostream>
#include "stack.h"
using namespace std;
bool check(string s){
    stack<char>s1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            s1.push(s[i]);
        }
        else {
            if(s1.is_empty()){
                return 0;
            }
            else{
                s1.pop();
            }
        }
    }
    return s1.is_empty();

}
int main(){
string str=")))())))";
cout<<check(str);
return 0;
}