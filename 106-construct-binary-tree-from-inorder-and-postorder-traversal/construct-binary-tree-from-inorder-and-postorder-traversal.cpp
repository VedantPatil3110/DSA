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
TreeNode* build(vector<int>& in,int inlo,int inhi,vector<int>& po,int polo,int pohi){
    if(inlo>inhi){
        return NULL;
    }
    TreeNode*root=new TreeNode(po[pohi]);
    if(inlo==inhi){
        return root;
    }
    int i=inlo;
    while(i<=inhi){
        if(po[pohi]==in[i]) break;
        i++;
    }
    int lcount=i-inlo;
    int rcount=inhi-i;
    root->left=build(in,inlo,i-1,po,polo,polo+lcount-1);
    root->right=build(in,i+1,inhi,po,polo+lcount,pohi-1);
    return root;
}
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=postorder.size();
        return build(inorder,0,n-1,postorder,0,n-1);
    }
};