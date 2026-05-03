#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node* right;
    
    node(int val){
        data=val;
        left=right=nullptr;
    }
};
int main(){
    int x;
    cout<<" enter root element";
    cin>>x;
    queue<node*>q;
    node *root=new node(x);
    q.push(root);
    while(!q.empty()){
node *temp=q.front();
q.pop();

int left;
int right;
cout<<"enter left child\n";
cin>>left;
if(left!=-1){
temp->left=new node(left);
q.push(temp->left);
}

cout<<"enter right child\n";
cin>>right;
if(right!=-1){
    temp->right=new node(right);
q.push(temp->right);
}

    }
}