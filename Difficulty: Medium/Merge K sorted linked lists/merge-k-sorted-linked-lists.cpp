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
    Node* mergeKLists(vector<Node*>& arr) {
        priority_queue<pair<int,Node*>,vector<pair<int,Node*>>,greater<pair<int,Node*>>>pq;
        for(int i=0;i<arr.size();i++){
            Node*head=arr[i];
            while(head){
                pq.push({head->data,head});
                head=head->next;
            }
        }
        Node*ans=new Node(1);
        Node*temp=ans;
        while(pq.size()>0){
            temp->next=pq.top().second;
            temp=temp->next;
            pq.pop();
        }
        return ans->next;
    }
};