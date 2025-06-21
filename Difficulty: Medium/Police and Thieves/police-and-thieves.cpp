class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        int count=0;
        int n=arr.size();
        int ans=0;
        int p=0;
        int t=0;
        while(p<n && t<n){
            while(p<n && arr[p]!='P'){
                p++;
            }
            while(t<n && arr[t]!='T'){
                t++;
            }
            if(p<n && t<n){
                if(abs(p-t)<=k){
                    ans++;
                    p++;
                    t++;
                }
                else{
                    if(p>t){
                        t++;
                    }
                    else{
                        p++;
                    }
                }
            }
        }
        return ans;
    }
};