//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// returns required number of subarrays
	int numOfsubarrays(int arr[], int n) {
	    // code here
	    int ans = 0;
	    for(int i = 0; i<n; i++){
	        
	        int sum = 0;
	        int product = 1;
	        for(int j = i; j<n; j++){
	            sum += arr[j];
	            product *= arr[j];
	            if(sum == product){
	                ans += 1;
	            }
	            
	        }
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.numOfsubarrays(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends