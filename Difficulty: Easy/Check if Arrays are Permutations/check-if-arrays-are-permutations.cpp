// User function Template for C++

// Complete this function
bool isArr2PermutationOfArr1(vector<int>& arr1, vector<int>& arr2) {
    int n=arr1.size()-1;
    return is_permutation(arr1.begin(), arr1.end(), arr2.begin());
    
}