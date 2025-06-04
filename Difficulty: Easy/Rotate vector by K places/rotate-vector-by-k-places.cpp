// User function Template for C++

/*
vec: original vector
K: rotate vector by K places
*/
vector<int> leftRotate(vector<int> &arr, int k) {
    // your code here
    rotate(arr.begin(),arr.begin()+k,arr.end());
    return arr;
}