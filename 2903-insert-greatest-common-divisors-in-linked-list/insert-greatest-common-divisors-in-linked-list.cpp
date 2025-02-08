/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
int gcd(int a,int b){
    int res=min(a,b);
    while(res>0){
        if(a%res==0&&b%res==0){
            break;
        }
        res--;
    }
    return res;
}
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode*slow=head;
        ListNode*fast=head->next;
        while(fast!=NULL){
            int gg=gcd(slow->val,fast->val);
            ListNode*ggg=new ListNode(gg);
            slow->next=ggg;
            ggg->next=fast;
            slow=fast;
            fast=fast->next;
        }
        return head;
    }
};