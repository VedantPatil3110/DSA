class Solution {
public:
    int maximum69Number (int num) {
        vector<int>ans;
        while(num>0){
            ans.push_back(num%10);
            num/=10;
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            if(ans[i]==6){
                ans[i]=9;
                break;
            }
        }
        int a=0;
        for(int i=0;i<ans.size();i++){
            a=a*10+ans[i];
        }
        return a;
    }
};