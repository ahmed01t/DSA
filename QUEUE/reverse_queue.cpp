#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
queue<int>q1;
stack<int>s1;
 q1.push(10);
 q1.push(20);
 q1.push(30);
 q1.push(40);
 q1.push(50);
while(!q1.empty()){
    s1.push(q1.front());
    q1.pop();
}
while(!s1.empty()){
    cout<<s1.top()<<" ";
    s1.pop();
}
}