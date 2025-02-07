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
// void helper(TreeNode*root,vector<int>&ans){
//     if(root==NULL){
//         return;
//     }
//     helper(root->left,ans);
//     ans.push_back(root->val);
//     helper(root->right,ans);
// }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        // vector<int>ans;
        // helper(root,ans);
        // return ans;
        TreeNode*curr=root;
        while(curr!=NULL){
            if(curr->left!=NULL){
                TreeNode*pred=curr->left;
                while(pred->right!=NULL && pred->right!=curr){
                    pred=pred->right;
                }
                if(pred->right==NULL){
                    pred->right=curr;
                    curr=curr->left;
                }
                if(pred->right==curr){
                    pred->right=NULL;
                    ans.push_back(curr->val);
                    curr=curr->right;
                }
            }
            else{
                ans.push_back(curr->val);
                curr=curr->right;
            }
        }
        return ans;
    }
};