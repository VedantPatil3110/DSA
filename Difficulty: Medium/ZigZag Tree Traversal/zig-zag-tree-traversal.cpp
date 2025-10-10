/*
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        queue<Node*>q;
        q.push(root);
        vector<int>ans;
        bool flag=true;
        while(!q.empty()){
            int size=q.size();
            vector<int>level(size);
            for(int i=0;i<size;i++){
                Node*temp=q.front();
                q.pop();
                int idx;
                if(flag){
                    idx=i;
                }
                else{
                    idx=size-i-1;
                }
                level[idx]=temp->data;
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            for(auto x:level){
                ans.push_back(x);
            }
            if(flag){
                flag=false;
            }
            else{
                flag=true;
            }
        }
        return ans;
    }
};