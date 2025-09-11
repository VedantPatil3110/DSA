class Solution {
  public:
  void merge(vector<int>&arr,int l,int mid,int r){
      int n1=mid-l+1;
      int n2=r-mid;
      vector<int>lt(n1),rt(n2);
      for(int i=0;i<n1;i++){
          lt[i]=arr[l+i];
      }
      for(int i=0;i<n2;i++){
          rt[i]=arr[mid+i+1];
      }
      int i=0,j=0;
      int k=l;
      while(i<n1 && j<n2){
          if(lt[i]<=rt[j]){
              arr[k]=lt[i];
              i++;
              k++;
          }
          else{
              arr[k]=rt[j];
              j++;
              k++;
          }
      }
      while(i<n1){
          arr[k]=lt[i];
          i++;
          k++;
      }
      while(j<n2){
          arr[k]=rt[j];
          j++;
          k++;
      }
  }
    void mergeSort(vector<int>& arr, int l, int r) {
        if(l>=r){
            return;
        }
        int mid=l+(r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
};