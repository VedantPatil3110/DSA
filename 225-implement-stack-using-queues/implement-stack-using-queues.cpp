class MyStack {
public:
queue<int>q;
    MyStack() {
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        if(q.empty()){
            return -1;
        }
        queue<int>temp;
        while(q.size()>1){
            temp.push(q.front());
            q.pop();
        }
        int a=q.front();
        q.pop();
        while(!temp.empty()){
            q.push(temp.front());
            temp.pop();
        }
        return a;
    }
    
    int top() {
        if(q.empty()){
            return -1;
        }
        queue<int>temp;
        while(q.size()>1){
            temp.push(q.front());
            q.pop();
        }
        int a=q.front();
        q.pop();
        temp.push(a);
        while(!temp.empty()){
            q.push(temp.front());
            temp.pop();
        }
        return a;
    }
    
    bool empty() {
        if(q.size()==0){
            return true;
        }
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */