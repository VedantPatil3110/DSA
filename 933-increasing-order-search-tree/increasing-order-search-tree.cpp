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
TreeNode*node=new TreeNode(0);
TreeNode*r=node;
void inorder(TreeNode*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    node->right=new TreeNode(root->val);
    node->left=NULL;
    node=node->right;
    inorder(root->right);
}
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        return r->right;
    }
};