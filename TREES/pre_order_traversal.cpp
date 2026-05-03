#include<iostream>
using namespace std;
void pre_order(node *root){
    if(root==null){
        return;
    }
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}

void inorder_traversal(node *root){
    if(root==null){return;}

    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}

void postorder_traversal(node *root){
    if(root==null){
        return;
    }
    postorder_traversal( root->left);
        postorder_traversal( root->right);
        cout<<root->data;


}