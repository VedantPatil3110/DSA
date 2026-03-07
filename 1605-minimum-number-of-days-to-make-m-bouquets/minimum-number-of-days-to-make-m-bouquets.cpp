class Solution {
public:
bool freaky(vector<int>&v,int mid,int k,int m){
    int temp=0;
    int ans=0;
    for(int i=0;i<v.size();i++){
        if(v[i]<=mid){
            temp++;
            if(temp==k){
                ans++;
                temp=0;
            }
        }
        if(v[i]>mid){
            temp=0;
        }
    }
    if(ans>=m){
        return true;
    }
    return false;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int i=*min_element(bloomDay.begin(),bloomDay.end());
        int j=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            bool f=freaky(bloomDay,mid,k,m);
            if(f){
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