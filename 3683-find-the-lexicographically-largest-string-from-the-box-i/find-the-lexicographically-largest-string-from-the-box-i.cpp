class Solution {
public:
int best(string &word,int n){
    int i=0;
    int j=1;
    while(j<n){
        int k=0;
        while(j+k<n && word[i+k]==word[j+k]){
            k++;
        }
        if(j+k<n && word[j+k]>word[i+k]){
            i=j;
            j=j+1;
        }
        else{
            j=j+k+1;
        }
    }
    return i;
}
    string answerString(string word, int numFriends) {
        int f=numFriends;
        int n=word.size();
        if(f==1){
            return word;
        }
        int largestpossible=n-(f-1); 
        int i=best(word,n);
        int cantake=min(largestpossible,n-i);
        return word.substr(i,cantake);
    }
};