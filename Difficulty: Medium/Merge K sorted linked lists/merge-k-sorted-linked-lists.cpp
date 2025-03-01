//{ Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print nodes in a given linked list */
void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    cout << endl;
}


// } Driver Code Ends

/*Linked list Node structure

struct Node
{
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
  Node*merge(Node*l1,Node*l2){
      if(!l1){
          return l2;
      }
      if(!l2){
          return l1;
      }
      Node*a=l1;
      Node*b=l2;
      Node*c=new Node(0);
      Node*temp=c;
      while(a!=NULL && b!=NULL){
          if(a->data<=b->data){
              temp->next=a;
              a=a->next;
              temp=temp->next;
          }
          else{
              temp->next=b;
              b=b->next;
              temp=temp->next;
          }
      }
      if(a==NULL){
          temp->next=b;
      }
      else{
          temp->next=a;
      }
      return c->next;
  }
    Node* mergeKLists(vector<Node*>& arr) {
        if(arr.size()<1){
            return NULL;
        }
        while(arr.size()>1){
            Node*a=arr[0];
            arr.erase(arr.begin());
            Node*b=arr[0];
            arr.erase(arr.begin());
            Node*c=merge(a,b);
            arr.push_back(c);
        }
        return arr[0];
    }
};



//{ Driver Code Starts.

// Driver program to test the above functions
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        cin >> n;
        cin.ignore();

        vector<Node*> v(n);

        for (int i = 0; i < n; i++) {
            string line;
            getline(cin, line);
            stringstream ss(line);

            Node* head = new Node(0);
            Node* temp = head;
            int x;
            while (ss >> x) {
                Node* newNode = new Node(x);
                temp->next = newNode;
                temp = temp->next;
            }
            v[i] = head->next;
        }

        Solution ob;
        Node* head = ob.mergeKLists(v);
        printList(head);
    }

    return 0;
}

// } Driver Code Ends