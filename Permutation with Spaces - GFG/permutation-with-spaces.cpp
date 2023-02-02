//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    
    void solve(string S, vector<string>&st, int index, string x){
        //base Condition
        if(index == S.size()-1){
            x+=S[index];
            st.push_back(x);
            return;
        }
        
        x += S[index];
        //exclude gap
        solve(S,st, index+1, x);
        
        //include gap
        
        x+=' ';
        
        
        solve(S, st, index+1, x);
        
    }
    
    vector<string> permutation(string S){
        // Code Here
        vector<string>ans;
        // set<string>st;
        int index = 0;
        string x = "";
        solve(S, ans, index, x);
        
        sort(ans.begin(), ans.end());
        return ans;
        
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends