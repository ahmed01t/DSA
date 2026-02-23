#include<iostream>
#include "stack.h"
using namespace std;
void print_Stack(stack<int>s){
        while(!s.is_empty()){
            cout<<s.peek()<<" ";
            s.pop();
        }
        cout<<endl;
}
int main(){
stack<int>st(5);
st.push(4);
st.push(3);
st.push(2);
st.push(1);
st.push(8);
print_Stack(st);


}

