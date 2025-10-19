/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

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
    vector<int> getKClosest(Node* root, int target, int k) {
        vector<int>ans;
        vector<int>in;
        inorder(root,in);
        int n = in.size();
        if (n == 0) return {};
        k = min(k, n);
        int pos=lower_bound(in.begin(),in.end(),target)-in.begin();
        int l=pos-1;
        int r=pos;
        while(k-->0 && (l >= 0 || r < n)){
            if(l<0){
                ans.push_back(in[r]);
                r++;
            }
            else if(r>=n){
                ans.push_back(in[l]);
                l--;
            }
            else if(abs(target-in[l])<=abs(target-in[r])){
                ans.push_back(in[l]);
                l--;
            }
            else{
                ans.push_back(in[r]);
                r++;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};