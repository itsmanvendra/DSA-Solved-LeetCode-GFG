//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long countSubsets(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        cout << countSubsets(a, n) << endl;
    }

    return 0;
}
// } Driver Code Ends


// User function Template for C++

long long countSubsets(int a[], int n) {
    set<int>st;
    for(int i = 0; i<n; i++){
        if(a[i]%2 == 0){
            st.insert(a[i]);
        }
    }
    int count = st.size();
    // cout<<count<<endl;
    long long int ans = pow(2, count);
    ans = ans-1;
    return ans;
}