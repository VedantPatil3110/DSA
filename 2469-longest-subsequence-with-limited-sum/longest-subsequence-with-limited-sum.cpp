class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        vector<int>ans(queries.size());
        for(int k=0;k<queries.size();k++){
            int maxlen=0;
            int i=0;
            int j=nums.size()-1;
            while(i<=j){
                int mid=i+(j-i)/2;
                if(nums[mid]>queries[k]){
                j=mid-1;
                }
                 else{
                maxlen=mid+1;
                i=mid+1;
                }
            }
            ans[k]=maxlen;
        }
        return ans;
    }
};