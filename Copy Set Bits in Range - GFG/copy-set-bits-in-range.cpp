//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        // code here
        int ans = 0;
        int count = 1;
        while(count <= r && y > 0){
            if(count < l){
                y = y/2;
            }
            else{
                if(y%2){
                    ans += pow(2,count-1);
                }
                y = y/2;
            }
            count++;
        }
        return x|ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, l, r;
        cin>>x>>y>>l>>r;
        
        Solution ob;
        cout<<ob.setSetBit(x, y, l, r)<<"\n";
    }
    return 0;
}
// } Driver Code Ends