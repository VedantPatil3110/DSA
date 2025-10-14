/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  void inorder(Node*root,vector<int>&in){
      if(root==NULL){
          return;
      }
      inorder(root->left,in);
      in.push_back(root->data);
      inorder(root->right,in);
  }
    int nodeSum(Node* root, int l, int r) {
        vector<int>in;
        inorder(root,in);
        int ans=0;
        for(int i=0;i<in.size();i++){
            if(in[i]>=l && in[i]<=r){
                ans+=in[i];
            }
        }
        return ans;
    }
};
