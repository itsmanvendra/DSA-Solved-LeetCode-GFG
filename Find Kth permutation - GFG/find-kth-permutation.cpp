//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    void solve(vector<int>&v, vector<int>&output, int xD, int n, int k){
        //base condition
        if(v.size() == 0){
            return ;
        }
        
        int p = xD/n;
        int q = k/p;
        int r = k%p;
        if(r == 0 && q!=0){
            q -= 1;
            r = p;
        }
        output.push_back(v[q]);
        v.erase(v.begin()+q);
        solve(v, output, p, n-1, r);
    }
    string kthPermutation(int n, int k)
    {
        // code here
        vector<int>v;
        int xD = 1;
        for(int i = 0; i<n; i++){
            v.push_back(i+1);
            xD *= (i+1);
        }
        vector<int>output;
        solve(v, output, xD, n, k);
        string ans="";
        for(int i=0; i<n; i++){
            ans += static_cast<char>(output[i]+48);
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Solution ob;
        string ans = ob.kthPermutation(n, k);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends