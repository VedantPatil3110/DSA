class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        unordered_set<int>s(nums.begin(),nums.end());
        int maxi=1;
        for(auto x:s){
            if(s.find(x-1)==s.end()){
                int a=x;
                int count=1;
                while(s.find(a+1)!=s.end()){
                    a++;
                    count++;
                }
                maxi=max(maxi,count);
            }
        }
        return maxi;
    }
};