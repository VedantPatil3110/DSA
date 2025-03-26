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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        int level=1;
        q.push(root);
        int msum=INT_MIN;
        int l=1;
        while(!q.empty()){
            int s=q.size();
            int lsum=0;
            while(s>0){
                s--;
                TreeNode*r=q.front();
                q.pop();
                lsum+=r->val;
                if(r->left){
                    q.push(r->left);
                }
                if(r->right){
                    q.push(r->right);
                }
            }
            if(msum<lsum){
                msum=lsum;
                l=level;
            }
            level++;
        }
        return l;
    }
};