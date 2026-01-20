class Solution {
  public:
  string str;
  string friky;
    void append(char x) {
        str.push_back(x);
    }

    void undo() {
        if(str.empty()){
            return;
        }
        friky.push_back(str.back());
        str.pop_back();
    }

    void redo() {
        if(friky.empty()){
            return;
        }
        str.push_back(friky.back());
        friky.pop_back();
    }

    string read() {
        return str;
    }
};