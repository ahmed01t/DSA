#include<iostream>
#include<queue>
#include<vector>
using namespace std;
void level_order_traversal( node *root){
queue<node *>q;
vector<int>ans;

q.push(root);
while(!q.empty()){
    node *temp=q.front();
    q.pop();
    ans.push_back(temp->data);
    if(temp->left){ q.push(temp->left;)}
    if(temp->right){ q.push(temp->right;)}
}
}