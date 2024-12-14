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
int levels(TreeNode*root){
    if(root==NULL){
        return 0;
    }
    int left=levels(root->left);
    int right=levels(root->right);
    if(root->left==NULL||root->right==NULL){
        return 1+left+right;
    }
    return 1+min(left,right);
}
int depth(TreeNode*root){
    return levels(root);
}
    int minDepth(TreeNode* root) {
        return depth(root);
    }
};