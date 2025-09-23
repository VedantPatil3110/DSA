class Solution {
public:
    int compareVersion(string version1, string version2) {
        // int v1=version1.size();
        // int v2=version2.size();
        // int n=max(v1,v2);
        // for(int i=0;i<n;i++){
        //     int a,b;
        //     if(i<v1){
        //         a=stoi(version1[i]);
        //     }
        //     else if(i<v2){
        //         b=stoi(version2[i]);
        //     }
        //     else if(a>b){
        //         return 1;
        //     }
        //     else if(b>a){
        //         return -1;
        //     }
        //     else if(i>v1 && i<v2){
        //         return -1;
        //     }
        //     else if(i<v1 && i>v2){
        //         return 1;
        //     }
        // }
        // return 0;
        int v1=version1.size();
        int v2=version2.size();
        int i=0;
        int j=0;
        while(i<v1 || j<v2){
            int n1=0;
            int n2=0;
            while(i<v1 && version1[i]!='.'){
                n1=n1*10+(version1[i]-'0');
                i++;
            }
            while(j<v2 && version2[j]!='.'){
                n2=n2*10+(version2[j]-'0');
                j++;
            }
            if(n1>n2){
                return 1;
            }
            else if(n1<n2){
                return -1;
            }
            i++;
            j++;
        }
        return 0;
    }
};