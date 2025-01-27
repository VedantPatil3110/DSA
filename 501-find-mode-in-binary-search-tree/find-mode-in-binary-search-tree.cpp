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
vector<int>ans;
TreeNode*prev=NULL;
int count=1;
int maxcount=0;
void traverse(TreeNode*root){
    if(root==NULL){
        return;
    }
    traverse(root->left);
    if(prev!=NULL){
        if(root->val==prev->val){
        count++;
        }
        else{
        count=1;
        }
    }
    if(count>maxcount){
        maxcount=count;
        ans.clear();
        ans.push_back(root->val);
    }
    else if(count==maxcount){
        ans.push_back(root->val);
    }
    prev=root;
    traverse(root->right);
}
    vector<int> findMode(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        traverse(root);
        return ans;
    }
};