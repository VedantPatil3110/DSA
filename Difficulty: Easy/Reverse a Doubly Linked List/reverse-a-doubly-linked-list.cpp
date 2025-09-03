/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        Node*curr=head;
        Node*newhead=NULL;
        while(curr!=NULL){
            Node*temp=curr->next;
            curr->next=curr->prev;
            curr->prev=temp;
            newhead=curr;
            curr=curr->prev;
        }
        return newhead;
    }
};