//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:

    void solve(string s, int N, vector<string> &ans, int count, int index, string st, vector<int> v){
        //base condition
        if(index == N || count == 0){
            ans.push_back(st);
            return ;
        }
        
        
        
        //exclusive
        vector<int> xD = v;
        
        xD[0] += 1;
        solve(s, N, ans, count, index+1, st, xD);
        
        
        //inclusive
        if(v[0] > v[1]){
            vector<int> xDD = v;
            st[index] = '0';
            xDD[1] += 1;
            solve(s, N, ans, count-1, index+1, st, xDD);
        }
    }


    
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    string s = "";
	    for(int i = 0; i<N; i++){
	        s += '1';
	    }
	    int index = 1;
	    vector<string> ans;
	    int count = N/2;
	    vector<int> v;
	    v.push_back(1);
	    v.push_back(0);
	    string st = s;
	    solve(s,N,ans, count, index, st, v);
	    sort(ans.begin(), ans.end());
	    reverse(ans.begin(), ans.end());
	    return ans;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends