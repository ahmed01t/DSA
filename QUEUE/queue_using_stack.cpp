#include<iostream>
using namespace std;
#include<stack>
class MyQueue {
public:
stack<int>s1;
stack<int>s2;
    MyQueue() {   
    }
    void push(int x) {
        s1.push(x);
    }
    bool empty() {
        return s1.empty() && s2.empty();
    }
    
    int pop() {
        if(empty()){
            return 0;
        }
        else if(!s2.empty()){
            int a=s2.top();
            s2.pop();
            return a;
        }
        else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
             int a=s2.top();
                s2.pop();
            return a;

        }
    }
    
    int peek() {
        if(empty()){
            return 0;
        }
       else if(!s2.empty()){
            return s2.top();
        }
        else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            return s2.top();
        }
    }
    
    
};






