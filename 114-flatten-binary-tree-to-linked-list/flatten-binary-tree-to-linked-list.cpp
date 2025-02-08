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
// void preorder(TreeNode*root,vector<TreeNode*>&ans){
//     if(root==NULL){
//         return;
//     }
//     ans.push_back(root);
//     preorder(root->left,ans);
//     preorder(root->right,ans);
// }
// void connection(vector<TreeNode*>ans,int i,int n){
//     while(i+1<=n){
//         ans[i]->right=ans[i+1];
//         ans[i]->left=NULL;
//         i++;
//     }
// }
    void flatten(TreeNode* root) {
        // vector<TreeNode*>ans;
        // preorder(root,ans);
        // int i=0;
        // int n=ans.size()-1;
        // connection(ans,i,n);
        if(root==NULL){
            return;
        }
        TreeNode*l=root->left;
        TreeNode*r=root->right;
        root->left=NULL;
        root->right=NULL;
        flatten(l);
        flatten(r);
        root->right=l;
        TreeNode*temp=root;
        while(temp->right!=NULL){
            temp=temp->right;
        }
        temp->right=r;
    }
};