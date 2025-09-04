/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        if(!head || k==1){
            return head;
        }
        Node*curr=head;
        Node*prev=NULL;
        stack<Node*>st;
        while(curr!=NULL){
            int count=0;
            while(curr!=NULL && count<k){
                st.push(curr);
                curr=curr->next;
                count++;
            }
            while(!st.empty()){
                if(prev==NULL){
                    prev=st.top();
                    head=prev;
                    st.pop();
                }
                else{
                    prev->next=st.top();
                    prev=prev->next;
                    st.pop();
                }
            }
        }
        prev->next=NULL;
        return head;
    }
};