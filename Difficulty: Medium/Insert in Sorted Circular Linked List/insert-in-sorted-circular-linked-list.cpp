/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        Node*p=new Node(data);
        if(head==NULL){
            return p;
        }
        Node*curr=head;
        if(data<head->data){
            while(curr->next!=head){
                curr=curr->next;
            }
            curr->next=p;
            p->next=head;
            return p;
        }
        Node*prev=head;
        curr=head->next;
        while(curr!=head && curr->data<data){
            prev=curr;
            curr=curr->next;
        }
        prev->next=p;
        p->next=curr;
        return head;
    }
};