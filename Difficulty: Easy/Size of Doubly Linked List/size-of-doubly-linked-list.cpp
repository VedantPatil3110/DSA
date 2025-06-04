// User function Template for C++
class Solution {
  public:
    int findSize(Node *head) {
        if(head==NULL){
            return 0;
        }
        int count=1;
        while(head!=NULL && head->next!=NULL){
            count++;
            head=head->next;
        }
        return count;
    }
};