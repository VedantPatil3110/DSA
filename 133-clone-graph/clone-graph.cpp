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
vector<Node*>registe;
void dfs(Node*actual,Node*clone){
    for(auto neighbor:actual->neighbors){
        if(registe[neighbor->val]==NULL){
            Node* a=new Node(neighbor->val);
            registe[a->val]=a;
            clone->neighbors.push_back(a);
            dfs(neighbor,a);
        }
        else{
            clone->neighbors.push_back(registe[neighbor->val]);
        }
    }
}
    Node* cloneGraph(Node* node) {
         if(node==NULL){
            return NULL;
         }
         Node*clone=new Node(node->val);
         registe.resize(110,NULL);
         registe[clone->val]=clone;
         dfs(node,clone);
         return clone;
    }
};