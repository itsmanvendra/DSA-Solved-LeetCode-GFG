//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long int minOperations(int N) {
        // Code here
        // int m = 1000000007;
        if(N%2 == 0){
            long long int n = N/2;
            long long int ans = (n)*(n);
            return ans;
        }
        else{
            long long int n = N/2;
            long long int ans = (n)*(n+1);
            return ans;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.minOperations(n) << endl;
    }
    return 0;
}
// } Driver Code Ends