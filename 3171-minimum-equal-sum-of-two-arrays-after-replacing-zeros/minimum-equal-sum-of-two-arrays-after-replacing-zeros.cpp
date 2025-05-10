class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1=0;
        long long sum2=0;
        long long count1=0;
        long long count2=0;
        for(auto n1:nums1){
            if(n1==0){
                count1++;
                sum1++;
            }
            sum1+=n1;
        }
        for(auto n2:nums2){
            if(n2==0){
                count2++;
                sum2++;
            }
            sum2+=n2;
        }
        if(sum1<sum2 && count1==0){
            return -1;
        }
        if(sum1>sum2 && count2==0){
            return -1;
        }
        return max(sum1,sum2);
    }
};