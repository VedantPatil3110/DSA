class Solution {
public:
void dfs(vector<vector<int>>&image,int currrow,int currcoll,int initialcolor,int newcolor){
    int n=image.size();
    int m=image[0].size();
    if(currrow<0 || currcoll<0 || currrow>=n || currcoll>=m){
        return;
    }
    if(image[currrow][currcoll]!=initialcolor){
        return;
    }
    image[currrow][currcoll]=newcolor;
    dfs(image,currrow+1,currcoll,initialcolor,newcolor);
    dfs(image,currrow,currcoll-1,initialcolor,newcolor);
    dfs(image,currrow-1,currcoll,initialcolor,newcolor);
    dfs(image,currrow,currcoll+1,initialcolor,newcolor);

}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(color==image[sr][sc]){
            return image;
        }
        dfs(image,sr,sc,image[sr][sc],color);
        return image;
    }
};