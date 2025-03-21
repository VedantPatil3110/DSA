//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends

// User Function template for C++

// Structure of node
/*struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
  int size(Node*root){
      if(root==NULL){
          return 0;
      }
      return 1+size(root->left)+size(root->right);
  }
  bool level(Node*root){
      int sizeo=size(root);
      int count=0;
      queue<Node*>q;
      q.push(root);
      while(count<sizeo){
          Node*temp=q.front();
          q.pop();
          count++;
          if(temp!=NULL){
              q.push(temp->left);
          }
          if(temp!=NULL){
              q.push(temp->right);
          }
          
        }
        while(q.size()>0){
            Node*temp=q.front();
            if(temp!=NULL){
                return false;
            }
            q.pop();
        }
        return true;
    }
  bool ismax(Node*root){
      if(root==NULL){
          return true;
      }
      if(root->left!=NULL&&root->data<root->left->data){
          return false;
      }
      if(root->right!=NULL&&root->data<root->right->data){
          return false;
      }
      return ismax(root->left)&&ismax(root->right);
  }
    bool isHeap(struct Node* tree) {
        if(level(tree)&&ismax(tree)){
            return true;
        }
        else{
            return false;
        }
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        Solution ob;
        Node *root = buildTree(treeString);
        if (ob.isHeap(root))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends