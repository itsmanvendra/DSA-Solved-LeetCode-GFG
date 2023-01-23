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

void solve1(int x, stack<int>&st){
    // cout<<x<<endl;
    //Base Condition
    if(st.empty() || x > st.top()){
        st.push(x);
        return ;
    }
    int y = st.top();
    // cout<< "y" << " "<<y<<endl;
    st.pop();
    solve1(x, st);
    st.push(y);
}

void solve(stack<int>&st){
    //Base Condition
    if(st.empty()){
        return;
    }
    int x = st.top();
    // cout<< "x" << " "/<<x<<endl;
    st.pop();
    solve(st);
    if(st.empty()){
        
        st.push(x);
    }
    else if(st.top() < x){
        st.push(x);
    }
    else{
        // cout<<x<<endl;
        solve1(x, st);
    }
}


void SortedStack :: sort()
{
   //Your code here
   
    solve(s);

    
   
}