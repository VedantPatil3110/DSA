/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/


// step1>create a deep copy without random
// step2>create alternate connections
// step3>assign random pointers of duplicate
// step4>removing connections


class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*>m;
        Node*dummy=new Node(0);
        Node*tempc=dummy;
        Node*temp=head;
        while(temp){
            Node*a=new Node(temp->val);
            tempc->next=a;
            tempc=tempc->next;
            temp=temp->next;
        }
        Node*b=dummy->next;
        Node*a=head;
        Node*tempa=a;
        Node*tempb=b;
        while(tempa!=NULL){
            m[tempa]=tempb;
            tempa=tempa->next;
            tempb=tempb->next;
        }
        for(auto x:m){
            Node*o=x.first;
            Node*d=x.second;
            if(o->random!=NULL){
                Node*oran=o->random;
                Node*dran=m[o->random];
                d->random=dran;
            }
        }
        return b;
    }
};