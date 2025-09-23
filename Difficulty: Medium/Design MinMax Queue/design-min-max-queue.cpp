class SpecialQueue {

  public:
  queue<int>q;
    void enqueue(int x) {
        q.push(x);
    }

    void dequeue() {
        if(q.empty()){
            return;
        }
        q.pop();
    }

    int getFront() {
        return q.front();
    }

    int getMin() {
        int n=q.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            int x=q.front();
            q.pop();
            mini=min(x,mini);
            q.push(x);
        }
        return mini;
    }

    int getMax() {
        int n=q.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            int x=q.front();
            q.pop();
            maxi=max(maxi,x);
            q.push(x);
        }
        return maxi;
    }
};