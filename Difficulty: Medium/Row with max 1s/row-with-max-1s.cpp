//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        priority_queue<pair<int,int>>p;
        for(int i=0;i<arr.size();i++){
            int count=0;
            for(int j=0;j<arr[0].size();j++){
                if(arr[i][j]==1){
                    count++;
                }
            }
            p.push({count,i});
        }
        if(p.top().first==0){
            return -1;
        }
        while(!p.empty()){
            int x=p.top().first;
            int y=p.top().second;
            p.pop();
            if(p.top().first<x){
                return y;
            }
        }
        return p.top().second;
        //   int n = arr.size(), m = arr[0].size();
        // priority_queue<pair<int, int>> pq;  // Max heap: {count_of_1s, row_index}

        // for (int i = 0; i < n; i++) {
        //     int c = count(arr[i].begin(), arr[i].end(), 1);  // Count 1s in row i
        //     pq.push({c, i});  // Push count and row index
        // }

        // return pq.top().first == 0 ? -1 : pq.top().second;  // If no 1s, return -1
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after the integer input
    while (t--) {
        string input;
        getline(cin, input);
        vector<vector<int>> mat;
        string innerArray;
        bool isInsideArray = false;

        for (char c : input) {
            if (c == '[') {
                if (isInsideArray) {
                    innerArray.clear();
                }
                isInsideArray = true;
            } else if (c == ']') {
                if (isInsideArray && !innerArray.empty()) {
                    vector<int> row;
                    stringstream ss(innerArray);
                    int num;

                    while (ss >> num) {
                        row.push_back(num);
                        if (ss.peek() == ',')
                            ss.ignore();
                        while (isspace(ss.peek()))
                            ss.ignore();
                    }

                    mat.push_back(row);
                    innerArray.clear();
                }
                isInsideArray = false;
            } else if (isInsideArray) {
                if (!isspace(c)) {
                    innerArray += c;
                }
            }
        }

        Solution obj;
        cout << obj.rowWithMax1s(mat);
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends