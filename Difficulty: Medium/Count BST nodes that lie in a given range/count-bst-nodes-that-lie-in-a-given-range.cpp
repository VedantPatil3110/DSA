/*
// Tree Node
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
  void inorder(Node*root,vector<int>&ans){
      if(root==NULL){
          return;
      }
      inorder(root->left,ans);
      ans.push_back(root->data);
      inorder(root->right,ans);
  }
    int getCount(Node *root, int l, int h) {
        vector<int>in;
        inorder(root,in);
        int ans=0;
        for(int i=0;i<in.size();i++){
            if(in[i]>=l && in[i]<=h){
                ans++;
            }
        }
        return ans++;
    }
};