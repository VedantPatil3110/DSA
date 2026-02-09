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
void inorder(TreeNode*root,vector<TreeNode*>&in){
    if(root==NULL){
        return;
    }
    inorder(root->left,in);
    in.push_back(root);
    inorder(root->right,in);
}
TreeNode* make(vector<TreeNode*>&in,int i,int j){
    if(i>j){
        return NULL;
    }
    int mid=i+(j-i)/2;
    TreeNode*root=in[mid];
    root->left=make(in,i,mid-1);
    root->right=make(in,mid+1,j);
    return root;
}
    TreeNode* balanceBST(TreeNode* root) {
        vector<TreeNode*>in;
        inorder(root,in);
        int n=in.size();
        return make(in,0,n-1);
    }
};