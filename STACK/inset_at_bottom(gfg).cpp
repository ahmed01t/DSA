#include<iostream>
#include "stack.h"
using namespace std;
void insert_at_bottom(stack<int>&s){
    int x=2;
stack<int>temp(6);
while(!s.is_empty()){
    temp.push(s.peek());
    s.pop();
}
s.push(x);
while(!temp.is_empty()){
    s.push(temp.peek());
    temp.pop();
}
while(!s.is_empty()){
    cout<<s.peek();
    s.pop();
}
}
int main(){
stack<int>st(6);
st.push(4);
st.push(3);
st.push(2);
st.push(1);
st.push(8);
insert_at_bottom(st);

}