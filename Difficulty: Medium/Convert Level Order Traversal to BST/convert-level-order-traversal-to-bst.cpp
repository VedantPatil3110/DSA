// Function to construct the BST from its given level order traversal.
Node*solve(Node*root,int x){
    if(root==NULL){
        return new Node(x);
    }
    if(root->data<x){
        root->right=solve(root->right,x);
    }
    else{
        root->left=solve(root->left,x);
    }
    return root;
}
Node* constructBst(int arr[], int n) {
    Node*root=NULL;
    for(int i=0;i<n;i++){
        root=solve(root,arr[i]);
    }
    return root;
}