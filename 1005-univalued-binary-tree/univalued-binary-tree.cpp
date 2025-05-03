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
void bfs(TreeNode*root,vector<int>&arr){
    if(root==NULL){
        return;
    }
    bfs(root->left,arr);
    arr.push_back(root->val);
    bfs(root->right,arr);
}
    bool isUnivalTree(TreeNode* root) {
        vector<int>arr;
        bfs(root,arr);
        int u=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]!=u){
                return false;
            }
        }
        return true;
    }
};