class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        queue<int>q;
        set<int>vis;
        q.push(0);
        vis.insert(0);
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            for(int x:rooms[curr]){
                if(vis.find(x)==vis.end()){
                    q.push(x);
                    vis.insert(x);
                }
            }
        }
        if(vis.size()==rooms.size()){
            return true;
        }
        return false;
    }
};