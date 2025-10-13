/*
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
  int solve(unordered_map<Node*,int>&mp,Node*root){
      if(root==NULL){
          return 0;
      }
      if(mp.find(root)!=mp.end()){
          return mp[root];
      }
      int ans=root->data;
      if(root->left){
          ans+=solve(mp,root->left->left)+solve(mp,root->left->right);
      }
      if(root->right){
          ans+=solve(mp,root->right->left)+solve(mp,root->right->right);
      }
      int noans=solve(mp,root->left)+solve(mp,root->right);
      mp[root]=max(ans,noans);
      return mp[root];
  }
    int getMaxSum(Node *root) {
        unordered_map<Node*,int>mp;
        return solve(mp,root);
    }
};