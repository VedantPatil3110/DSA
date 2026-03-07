class Solution {
public:
bool f(vector<int>&v,int d,int mid){
    int ans=1;
    int sum=0;
    for(int i=0;i<v.size();i++){
        if(sum+v[i]>mid){
            ans++;
            sum=v[i];
        }
        else{
            sum+=v[i];
        }
    }
    if(ans<=d){
        return true;
    }
    return false;
}
    int shipWithinDays(vector<int>& w, int days) {
        int i=*max_element(w.begin(),w.end());
        int j=accumulate(w.begin(),w.end(),0);
        int ans=-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(f(w,days,mid)){
                ans=mid;
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return ans;
    }
};