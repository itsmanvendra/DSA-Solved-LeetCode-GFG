//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int solve(int N, int arr[], vector<vector<int>> &xD, int sum){
        //Base Condition
        if(N == 0 || sum == 0){
            if(sum == 0){
                return xD[N][sum];
            }
            return xD[N][sum];
        }
        
        if(xD[N][sum] != -1){
            return xD[N][sum];
        }
        else{
            if(sum >= arr[N-1]){
                xD[N][sum] = solve(N-1, arr, xD, sum-arr[N-1]) || solve(N-1, arr, xD, sum);
                
            }
            else{
                xD[N][sum] = solve(N-1, arr, xD, sum);
                
            }
        }
        return xD[N][sum];
        
        
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum = 0;
        for(int i = 0; i<N; i++){
            sum += arr[i];
        }
        if(sum%2 == 1){
            return 0;
        }
        else{
            sum = sum/2;
            vector<vector<int>> xD(N+1, vector<int> (sum+1, -1));
            
            for(int i = 0; i<sum+1; i++){
                xD[0][i] = 0;
            }
            for(int i = 0; i<N+1; i++){
                xD[i][0] = 1;
            }
            int ans = solve(N, arr, xD, sum);
            
            return ans;
        }
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends