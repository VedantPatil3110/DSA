//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};


// } Driver Code Ends

// Function to search a node in BST.
class Solution{

public:
void in(Node*root,vector<int>&ans){
    if(root==NULL){
        return;
    }
    in(root->left,ans);
    ans.push_back(root->data);
    in(root->right,ans);
}
    int floor(Node* root, int x) {
        vector<int>ans;
        in(root,ans);
        int n=ans.size();
        if(x<ans[0]){
            return -1;
        }
        if(ans[n-1]<x){
            return ans[n-1];
        }
        for(int i=0;i<n;i++){
            if(ans[i]==x){
                return ans[i];
            }
            else if(ans[i]>x){
                return ans[i-1];
            }
        }
        return -1;
        
    }
};


//{ Driver Code Starts.

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int s;
        cin >> s;
        Solution obj;
        cout << obj.floor(root, s) << "\n";
    
cout << "~" << "\n";
}
}

// } Driver Code Ends