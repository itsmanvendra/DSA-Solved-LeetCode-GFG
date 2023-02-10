//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        int b = 0;
        int a = 0;
        int l = 0;
        int o = 0;
        int n = 0;
        for(int i = 0; i<s.length(); i++){
            if(s[i] == 'b'){
                b += 1;
                
            }
            else if(s[i] == 'a'){
                a += 1;
            }
            else if(s[i] == 'l'){
                l += 1;
            }
            else if(s[i] == 'o'){
                o += 1;
            }
            else if(s[i] == 'n'){
                n += 1;
            }
        }
        l = l/2;
        o = o/2;
        int ans = min(a,b);
        ans = min(ans, l);
        ans = min(ans, o);
        ans = min(ans, n);
        return ans;
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends