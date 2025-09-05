/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        int count1=0;
        int count2=0;
        int count0=0;
        Node*temp=head;
        while(temp){
            if(temp->data==0){
                count0++;
            }
            if(temp->data==1){
                count1++;
            }
            if(temp->data==2){
                count2++;
            }
            temp=temp->next;
        }
        Node*ans=new Node(1);
        temp=ans;
        while(count0>0){
            temp->next=new Node(0);
            temp=temp->next;
            count0--;
        }
        while(count1>0){
            temp->next=new Node(1);
            temp=temp->next;
            count1--;
        }
        while(count2>0){
            temp->next=new Node(2);
            temp=temp->next;
            count2--;
        }
        return ans->next;
    }
};