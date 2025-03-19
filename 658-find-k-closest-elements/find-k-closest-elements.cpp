class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // vector<int>v(k);
        // int mid=-1;
        // int t=0;
        // int n=arr.size();
        // bool flag=false;
        // if(x<arr[0]){
        //     for(int i=0;i<k;i++){
        //         v[i]=arr[i];
        //     }
        //     return v;
        // }
        // if(x>arr[n-1]){
        //     int i=n-1;
        //     int j=k-1;
        //     while(j>=0){
        //         v[j]=arr[i];
        //         j--;
        //         i--;
        //     }
        //     return v;
        // }
        // int l=0;
        // int h=n-1;
        // while(l<=h){
        //     mid=l+((h-l)/2);
        //     if(arr[mid]==x){
        //         flag=true;
        //         v[t]=arr[mid];
        //         t++;
        //         break;
        //     }
        //     else if(arr[mid]<x){
        //         l=mid+1;
        //     }
        //     else{
        //         h=mid-1;
        //     }
        // }
        // int lb=h;
        // int hb=l;
        // if(flag==true){
        //     lb=mid-1;
        //     hb=mid+1;
        //     while(t<k && lb>=0 && hb<=n-1){
        //         int d1=abs(x-arr[lb]);
        //         int d2=abs(x-arr[hb]);
        //         if(d1<=d2){
        //             v[t]=arr[lb];
        //             lb--;
        //         }
        //         else{
        //             v[t]=arr[hb];
        //             hb++;
        //         }
        //         t++;
        //     }
        // }
        // else{
        //     while(t<k && lb>=0 && hb<=(n-1)){
        //         int d1=abs(x-arr[lb]);
        //         int d2=abs(x-arr[hb]);
        //         if(d1<=d2){
        //             v[t]=arr[lb];
        //             lb--;
        //         }
        //         else{
        //             v[t]=arr[hb];
        //             hb++;
        //         }
        //         t++;
        //     }
        // }
        // if(lb<0){
        //     while(t<k){
        //     v[t]=arr[hb];
        //     hb++;
        //     t++;
        //     }
        // }
        // if(hb>0){
        //     while(t<k){
        //     v[t]=arr[lb];
        //     lb--;
        //     t++;
        //     }
        // }
        // sort(v.begin(),v.end());
        // return v;
        if(k==arr.size()){
            return arr;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
        for(int i=0;i<arr.size();i++){
            p.push({abs(arr[i]-x),arr[i]});
        }
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(p.top().second);
            p.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};