class Router {
public:
int max_size;
unordered_map<string,vector<int>>packetstore;
unordered_map<int,vector<int>>desttime;
queue<string>q;
    Router(int memoryLimit) {
        max_size=memoryLimit;
    }

    string makekey(int source,int destination,int timestamp){
        return to_string(source)+"_"+to_string(destination)+"_"+to_string(timestamp);
    }

    bool addPacket(int source, int destination, int timestamp) {
        string key=makekey(source,destination,timestamp);
        if(packetstore.find(key)!=packetstore.end()){
            return false;
        }
        if(q.size()>=max_size){
            forwardPacket();
        }
        packetstore[key]={source,destination,timestamp};
        q.push(key);
        desttime[destination].push_back(timestamp);
        return true;
    }
    
    vector<int> forwardPacket() {
        if(packetstore.empty()){
            return {};
        }

        string key=q.front();
        q.pop();
        vector<int>packet=packetstore[key];
        packetstore.erase(key);
        int d=packet[1];
        desttime[d].erase(desttime[d].begin());
        return packet;
    }
    
    int getCount(int destination, int startTime, int endTime) {
        auto it=desttime.find(destination);
        if(it==desttime.end() || it->second.empty()){
            return 0;
        }
        int i=lower_bound(begin(it->second),end(it->second),startTime)-begin(it->second);
        int j=upper_bound(begin(it->second),end(it->second),endTime)-begin(it->second);
        return j-i;

    }
};

/**
 * Your Router object will be instantiated and called as such:
 * Router* obj = new Router(memoryLimit);
 * bool param_1 = obj->addPacket(source,destination,timestamp);
 * vector<int> param_2 = obj->forwardPacket();
 * int param_3 = obj->getCount(destination,startTime,endTime);
 */