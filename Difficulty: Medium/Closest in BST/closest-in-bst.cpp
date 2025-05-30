/*
Tree Node
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

class Solution {
  public:
    // Function to find the least absolute difference between any node
    // value of the BST and the given integer.
    void preorder(Node*root,int k, int &ans){
        if(root==NULL){
            return;
        }
        ans=min(abs(root->data-k),ans);
        if(k<root->data){
            preorder(root->left,k,ans);
        }
        else{
            preorder(root->right,k,ans);
        }
    }
    int minDiff(Node *root, int K) {
        int ans=INT_MAX;
        preorder(root,K,ans);
        return ans;
    }
};