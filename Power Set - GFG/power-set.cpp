//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
	    void solve(string s, string st, vector<string>&ans, int count){
	        if(count == s.size()){
	            if(st.empty()){
	                return;
	            }
	            ans.push_back(st);
	            return ;
	        }
	        //inclusive
	        string w = st;
	        w += s[count];
	        solve(s,w,ans,count+1);
	        
	        //exclusive
	        solve(s,st,ans,count+1);
	    }
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    string st = "";
		    vector<string> ans;
		    int count = 0;
		    solve(s, st, ans, count);
		    sort(ans.begin(), ans.end());
		    return ans;
		    
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends