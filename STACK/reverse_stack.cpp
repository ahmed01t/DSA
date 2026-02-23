#include<iostream>
#include<vector>
#include "stack.h"
using namespace std;
int main(){
    vector<char> s={'h','e','l','l','o'};
stack<char>st(5);

for(int i=0;i<s.size();i++){
    st.push(s[i]);
}
int i=0;
while(!st.is_empty()){
    s[i]=st.peek();
    st.pop();
     i++;

}
for(char c:s){
    cout<<c<<" "<<endl;
}
}
