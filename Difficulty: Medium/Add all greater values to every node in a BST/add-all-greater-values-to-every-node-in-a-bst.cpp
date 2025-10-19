/*
Node structure is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
// modify the BST and return its root
void solve(Node*root,int &i){
    if(root==NULL){
        return;
    }
    solve(root->right,i);
    i+=root->data;
    root->data=i;
    solve(root->left,i);
    
}
Node* modify(Node* root) {
    int sum=0;
    solve(root,sum);
    return root;
}