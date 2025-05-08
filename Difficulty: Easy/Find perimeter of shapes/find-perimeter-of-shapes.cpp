//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 100


// Returns sum of perimeter of shapes formed with 1s
int findPerimeter(int mat[MAX][MAX], int n,int m);

int main() {
	int t;
	cin>>t;
	int g[MAX][MAX];
	while(t--)
	{
		memset(g,0,sizeof g);
		int n;
		cin>>n;
		int m;
		cin>>m;
	
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>g[i][j];
			}
		}
		
		cout<<findPerimeter(g,n,m)<<endl;
	
cout << "~" << "\n";
}
	// your code goes here
	return 0;
}
// } Driver Code Ends


/*You are required to complete this method */
int findPerimeter(int mat[MAX][MAX], int n, int m) {
     int row=n;
        int col=m;
        int count=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j]==1){
                    count+=4;
                    if(i>0 && mat[i-1][j]==1){
                        count--;
                    }
                    if(i<row-1 && mat[i+1][j]==1){
                        count--;
                    }
                    if(j<col-1 && mat[i][j+1]==1){
                        count--;
                    }
                    if(j>0 && mat[i][j-1]==1){
                        count--;
                    }
                }
            }
        }
        return count;
    
}