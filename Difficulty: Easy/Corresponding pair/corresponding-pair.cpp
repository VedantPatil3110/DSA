// User function Template for C++

/*
a[], b[]: arrays whose corresponding values needs to be returned
                as pair array
n: size of arrays
pair<int, int>res[]: resultant pair array
*/
void corresPair(int a[], int b[], int n, pair<int, int> res[]) {
    for(int i=0;i<n;i++){
        res[i]={a[i],b[i]};
    }
}