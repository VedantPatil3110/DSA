/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
  void help(Node*root,int l,int a,int &count,int &sum){
      if(root==NULL){
          return;
      }
      a+=root->data;
      if(root->left==NULL && root->right==NULL){
          if(l>count){
              sum=a;
          }
          else if(l==count){
              sum=max(sum,a);
          }
      }
      count=max(count,l);
      help(root->left,l+1,a,count,sum);
      help(root->right,l+1,a,count,sum);
  }
    int sumOfLongRootToLeafPath(Node *root) {
        int count=-1;
        int sum=0;
        help(root,0,0,count,sum);
        return sum;
    }
};