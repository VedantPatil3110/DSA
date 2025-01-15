//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);

cout << "~" << "\n";
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void solves(int t,stack<int>&st){
    if(st.size()==0||t>st.top()){
        st.push(t);
        return;
    }
    int second=st.top();
    st.pop();
    solves(t,st);
    st.push(second);
}
void solve(stack<int>&st){
    if(st.size()==0){
        return;
    }
    int n=st.size();
    int t=st.top();
    st.pop();
    solve(st);
    solves(t,st);
}
void SortedStack :: sort()
{
    solve(s);
}