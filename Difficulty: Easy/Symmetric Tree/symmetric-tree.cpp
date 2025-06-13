/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
  bool help(Node*r1,Node*r2){
      if(r1==NULL && r2==NULL){
          return true;
      }
      if(r1!=NULL&&r2==NULL){
          return false;
      }
      if(r1==NULL&&r2!=NULL){
          return false;
      }
      if(r1->data!=r2->data){
          return false;
      }
      return help(r1->left,r2->right)&&help(r2->left,r1->right);
  }
    bool isSymmetric(Node* root) {
        if(root->left==NULL&&root->right==NULL){
            return true;
        }
        return help(root->left,root->right);
    }
};