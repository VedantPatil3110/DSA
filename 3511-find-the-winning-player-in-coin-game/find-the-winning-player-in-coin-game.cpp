class Solution {
public:
    string winningPlayer(int x, int y) {
        int i=0;
        while(x>=1 && y>=4){
            x--;
            y-=4;
            i++;
        }
        if(i%2!=0){
            return "Alice";
        }
        else{
            return "Bob";
        }
    }
};