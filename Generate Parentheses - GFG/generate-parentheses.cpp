//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void solve(int n, int a, int b, vector<string> &ans, string &st){
        if(a+b == 2*n){
            ans.push_back(st);
            return;
        }
        if(a < n){
            
            string xD = st;
            xD += '(';
            solve(n, a+1, b, ans, xD);
            
            
            // xD.pop_back();
        }
        
        if(a > b){
            string xDD = st;
            xDD += ')';
            solve(n, a, b+1, ans, xDD);
            // xDD.pop_back();
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string> ans;
        int a = 0;
        int b = 0;
        string st = "";
        solve(n, a,b, ans, st);
        return ans;
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends