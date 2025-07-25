class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        vector<int>pre(n+1);
        vector<int>suff(n+1);
        pre[0]=0;
        for(int i=0;i<n;i++){
            if(customers[i]=='N'){
                pre[i+1]=pre[i]+1;
            }
            else{
                pre[i+1]=pre[i];
            }
            
        }
        suff[n]=0;
        for(int i=n-1;i>=0;i--){
            if(customers[i]=='Y'){
                suff[i]=suff[i+1]+1;
            }
            else{
                suff[i]=suff[i+1];
            }
        }
        int mini=n+5;
        for(int i=0;i<=n;i++){
            pre[i]+=suff[i];
            int pen=pre[i];
            mini=min(mini,pen);
        }
        for(int i=0;i<=n;i++){
            int pen=pre[i];
            if(pre[i]==mini){
                return i;
            }
        }
        return n;
    }
};