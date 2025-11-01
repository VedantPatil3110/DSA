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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        ListNode*ans=new ListNode(0);
        ListNode*temp=ans;
        while(head){
            if(s.find(head->val)==s.end()){
                temp->next=head;
                temp=temp->next;
            }
            head=head->next;
        }
        temp->next=NULL;
        return ans->next;
    }
};