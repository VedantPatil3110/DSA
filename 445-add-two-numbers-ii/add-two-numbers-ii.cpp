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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // ListNode*head=new ListNode(0);
        // int carry=0;
        // ListNode*curr=head;
        // while(l1||l2||carry){
        //     int sum=carry;
        //     if(l1){
        //         sum+=l1->val;
        //         l1=l1->next;
        //     }
        //     if(l2){
        //         sum+=l2->val;
        //         l2=l2->next;
        //     }
        //     carry=sum/10;
        //     curr->next=new ListNode(sum%10);
        //     curr=curr->next;
        // }
        // return head->next;
        stack<int>s1,s2;
        while(l1){
            s1.push(l1->val);
            l1=l1->next;
        }
        while(l2){
            s2.push(l2->val);
            l2=l2->next;
        }
        int carry=0;
        ListNode*result=NULL;
        while(!s1.empty()||!s2.empty()||carry){
            int sum=carry;
            if(!s1.empty()){
                sum+=s1.top();
                s1.pop();
            }
            if(!s2.empty()){
                sum+=s2.top();
                s2.pop();
            }
            ListNode*a=new ListNode(sum%10);
            a->next=result;
            result=a;
            carry=sum/10;
        }
        return result;
    }
};