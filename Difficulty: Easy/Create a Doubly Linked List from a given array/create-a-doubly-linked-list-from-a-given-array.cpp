/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int d) {
        data = d;
        next = NULL;
        prev = NULL;
    }
};
*/

class Solution {
  public:
    Node* createDLL(vector<int>& arr) {
        Node*head=new Node(arr[0]);
        head->prev=NULL;
        Node*temp=head;
        for(int i=1;i<arr.size();i++){
            temp->next=new Node(arr[i]);
            Node*nig=temp->next;
            nig->prev=temp;
            temp=temp->next;
        }
        temp->next=NULL;
        return head;
    }
};