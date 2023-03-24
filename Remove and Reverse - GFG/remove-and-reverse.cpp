//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    string removeReverse(string S) {
        // code here
        map<char, int>mp;
        for(int i = 0; i<S.length(); i++){
            mp[S[i]]++;
        }
        int x = 0;
        int y = S.length()-1;
        bool b = true;
        for(int i= 0; i<S.length(); i++){
            if(b){
                if(mp[S[x]] > 1){
                    mp[S[x]]--;
                    S[x]='A';
                    
                    b = false;
                    
                }
                x++;
                
            }
            else{
                if(mp[S[y]] > 1){
                    
                    mp[S[y]]--;
                    S[y]='A';
                    b = true;
                }
                y--;
            }
        }
        string ans = "";
        for(int i = 0; i<S.length(); i++){
            if(S[i] != 'A'){
                ans += S[i];
            }
        }
        if(b){
            return ans;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends