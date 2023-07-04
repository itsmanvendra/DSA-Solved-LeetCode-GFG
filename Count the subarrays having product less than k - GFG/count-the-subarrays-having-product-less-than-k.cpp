//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long ans = 1;
        int count = 0;
        int start = 0;
        int end = 0;
        while(end < n){
            if(ans*a[end] < k){
                ans = ans*a[end];
                // cout<<ans<<endl;
                count++;
                end++;
                if(end == n){
                    start++;
                    end = start;
                    ans = 1;
                }
            }
            else{
                start++;
                end = start;
                ans = 1;
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
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends