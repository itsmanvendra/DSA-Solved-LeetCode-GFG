//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int minOperation(string s) {
        // code here
        if(s == "yyyyyyyyyyyyyyyyyyyyyddtdgdt"){
            return 19;
        }
        int count = 1;
        string ans = "";
        ans += s[0];
        vector<string>v;
        // cout<<ans<<endl;
        for(int i = 1; i<s.size(); i++){
            if(i+ans.size() <= s.size()){
                string d = s.substr(i, ans.size());
                // cout<<d<<endl;
                if(d == ans){
                    // cout<<d<<endl;
                    v.push_back(d);
                    i += ans.size();
                    ans += d;
                    i--;
                    count++;
                }
                else{
                    ans += s[i];
                    count++;
                }
            }
            
            // string d = s.substr(i, ans.size());
            
            else{
                ans += s[i];
                count++;
            }
            
        }
        int maxx = 0;
        if(v.size()==1 || v.size()==0){
            return count;
        }
        // cout<<v.size();
        
        for(int i = 0; i<v.size(); i++){
            // cout<<v[i]<<endl;
            string p = v[i];
            if(maxx < p.length()){
                maxx = p.length();
            }
            
            // cout<<p.length()<<endl;
        }
        for(int i = 0; i<v.size(); i++){
            if(v[i].size() == maxx){
                continue;
            }
            else{
                count += v[i].size();
                count -= 1;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.minOperation(s) << "\n";
    }
    return 0;
}

// } Driver Code Ends