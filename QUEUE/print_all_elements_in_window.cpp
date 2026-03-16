#include<iostream>
#include<queue>
using namespace std;
void display(queue<int>q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main(){
int arr[6]={3,6,2,7,8,11};
int n=6;
int k=3;
queue<int>q;
// push k-1 elements in queue
for(int i=0;i<k-1;i++){
    q.push(arr[i]);
}

for(int i=k-1;i<n;i++){
    q.push(arr[i]);
    display(q);
    q.pop();
}
}