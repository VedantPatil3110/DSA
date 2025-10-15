/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
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
    int kthSmallest(Node *root, int k) {
        vector<int>in;
        inorder(root,in);
        if(k-1>in.size()-1){
            return -1;
        }
        return in[k-1];
    }
};