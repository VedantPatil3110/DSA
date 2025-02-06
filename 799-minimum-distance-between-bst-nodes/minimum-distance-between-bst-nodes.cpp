/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public: 
void inorder(TreeNode*root,vector<int>&ans){
    if(root==NULL){
        return;
    }
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
}
int diff(vector<int>&ans){
    int n=ans.size();
    int d=INT_MAX;
    for(int i=0;i<n-1;i++){
        if(abs(ans[i]-ans[i+1])<d){
            d=abs(ans[i]-ans[i+1]);
        }
    } 
    return d;   
}
    int minDiffInBST(TreeNode* root) {
        vector<int>ans; 
        inorder(root,ans); 
        return diff(ans);
    }
};