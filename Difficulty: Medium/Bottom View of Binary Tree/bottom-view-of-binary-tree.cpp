/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            Node* a=q.front().first;
            int b=q.front().second;
            q.pop();
            mp[b]=a->data;
            if(a->left){
                q.push({a->left,b-1});
            }
            if(a->right){
                q.push({a->right,b+1});
            }
        }
        vector<int>ans;
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};