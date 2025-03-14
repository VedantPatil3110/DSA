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
int res=0;
int level=0;
void dfs(TreeNode*root,int depth){
    if(root==NULL){
        return;
    }
    depth++;
    if(root->left==NULL&&root->right==NULL){
        if(depth>level){
            level=depth;
            res=root->val;
        }
    }
        dfs(root->left, depth);
        dfs(root->right, depth);
}
    int findBottomLeftValue(TreeNode* root) {
        dfs(root,1);
        return res;
    }
};