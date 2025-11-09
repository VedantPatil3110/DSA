/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
vector<Node*>vis;
void dfs(Node*actual,Node*clone){
    for(auto x:actual->neighbors){
        if(vis[x->val]==NULL){
            Node*n=new Node(x->val);
            vis[n->val]=n;
            clone->neighbors.push_back(n);
            dfs(x,n);
        }
        else{
            clone->neighbors.push_back(vis[x->val]);
        }
    }
}
    Node* cloneGraph(Node* node) {
        if(node==NULL){
            return NULL;
        }
        Node*clone=new Node(node->val);
        vis.resize(110,NULL);
        vis[clone->val]=clone;
        dfs(node,clone);
        return clone;
    }
};