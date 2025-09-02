/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* swapKth(Node* head, int k) {
        int n=0;
        Node*temp=head;
        while(temp){
            n++;
            temp=temp->next;
        }
        if(k>n){
            return head;
        }
        if(2*k-1==n){
            return head;
        }
        Node*tempa=head;
        Node*preva=NULL;
        for(int i=0;i<k-1;i++){
            preva=tempa;
            tempa=tempa->next;
        }
        Node*tempb=head;
        Node*prevb=NULL;
        for(int i=0;i<n-k;i++){
            prevb=tempb;
            tempb=tempb->next;
        }
        if(preva){
            preva->next=tempb;
        }
        if(prevb){
            prevb->next=tempa;
        }
        Node*tempn=tempa->next;
        tempa->next=tempb->next;
        tempb->next=tempn;
        if (k == 1) head = tempb;
        if (k == n) head = tempa;
        return head;
    }
};