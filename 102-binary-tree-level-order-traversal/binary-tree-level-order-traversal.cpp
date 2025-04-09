class Solution {
public:
// int level(TreeNode*root){
//         if(root==NULL){
//             return 0;
//         }
//         return 1+max(level(root->left),level(root->right));
//     }
//     void dd(TreeNode*root,int count,int level,vector<int>&v){
//         if(root==NULL){
//             return;
//         }
//         if(count==level){
//             v.push_back(root->val);
//             return;
//         }
//         dd(root->left,count+1,level,v);
//         dd(root->right,count+1,level,v);
//     }
// void lorder(TreeNode*root,vector<vector<int>>&ans){
//         int n=level(root);
//         for(int i=0;i<n;i++){
//             vector<int>v;
//         dd(root,0,i,v);
//         ans.push_back(v);
//         }
//     }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        // lorder(root,ans);
        // return ans;
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>level;
            int s=q.size();
            for(int i=0;i<s;i++){
                TreeNode*temp=q.front();
                q.pop();
                level.push_back(temp->val);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            ans.push_back(level);
        }
        return ans;
    }
};