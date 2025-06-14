// User function Template for C++

class Solution {
  public:
    int maxNumbers(int n, int k, int a[]) {
        // code here
        set<int>s;
        for(int i=0;i<n;i++){
            s.insert(a[i]);
        }
        vector<int>v;
        int sum=k;
        int count=0;
        for(int i=1;i<k;i++){
            if(s.find(i)!=s.end()){
                continue;
            }
            else if(s.find(i)==s.end()){
                if(sum-i>=0){
                    count++;
                    sum-=i;
                    v.push_back(i);
                }
                else{
                    break;
                }
            }
        }
        return count;
    }
};