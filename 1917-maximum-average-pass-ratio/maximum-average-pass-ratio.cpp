class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        int n=classes.size();
        priority_queue<pair<double,pair<int,int>>>pq;
        for(int i=0;i<n;i++){
            pq.push({(double)(classes[i][0]+1)/(classes[i][1]+1) -(double)classes[i][0]/classes[i][1],{classes[i][0],classes[i][1]}});
        }
        while(extraStudents>0){
            int a =pq.top().second.first;
            int b=pq.top().second.second;
            pq.pop();
            a++;
            b++;
            pq.push({(double)(a+1)/(b+1) - (double)a/b,{a,b}});
            extraStudents--;
        }
        double sum=0.0;
        while(pq.size()>0){
            int a=pq.top().second.first;
            int b=pq.top().second.second;
            pq.pop();
            sum+=(double)a/(double (b));
        }
        return sum/n;
    }
};