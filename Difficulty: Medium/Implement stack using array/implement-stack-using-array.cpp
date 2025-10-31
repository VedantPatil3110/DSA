class myStack {
  public:
  vector<int>v;
  int top;
  int cap;
    myStack(int n) {
        v.resize(n);
        top=-1;
        cap=n;
    }

    bool isEmpty() {
        if(top==-1){
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if(top==cap-1){
            return true;
        }
        return false;
    }

    void push(int x) {
        if(isFull()){
            return;
        }
        top++;
        v[top]=x;
    }

    void pop() {
        if(isEmpty()){
            return;
        }
        top--;
    }

    int peek() {
        if(isEmpty()){
            return -1;
        }
        return v[top];
    }
};