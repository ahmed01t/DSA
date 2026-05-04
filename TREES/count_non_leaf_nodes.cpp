int non_leaf(node *root,int &count){
    if(root==null){
        return;
    }
    if(root->left || root->right){
        count++;
    }
    non_leaf(root->left,count);
    non_leaf(root->right,count);
}