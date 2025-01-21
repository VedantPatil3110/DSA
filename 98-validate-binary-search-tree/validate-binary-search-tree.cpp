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
// int lefty(TreeNode*root,int a){
//     if(root==NULL){
//         return a;
//     }
//     if(root->val>a){
//         a=root->val;
//     }
//     return lefty(root->left,a);
//     return lefty(root->right,a);
// }
// int righty(TreeNode*root,int a){
//     if(root==NULL){
//         return a;
//     }
//     if(root->val<a){
//         a=root->val;
//     }
//     return lefty(root->left,a);
//     return lefty(root->right,a);
// }
long long  maxtree(TreeNode*root){
    if(root==NULL){
        return LLONG_MIN;
    }
    return max((long long)(root->val),max(maxtree(root->left),maxtree(root->right)));
}
long long  mintree(TreeNode*root){
    if(root==NULL){
        return LLONG_MAX;
    }
    return min((long long)(root->val),min(mintree(root->left),mintree(root->right)));
}
    bool isValidBST(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        // else if(root->left==NULL&&root->right==NULL){
        //     return true;
        // }
       else if((long long)(root->val)<=maxtree(root->left)){
        return false;
       }
       else if((long long)(root->val)>=mintree(root->right)){
        return false;
       }
       return isValidBST(root->left)&&isValidBST(root->right);
    }
};