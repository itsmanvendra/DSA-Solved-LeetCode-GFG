//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    
    int solve(vector<int>arr, int sum, int n, vector<vector<int>> &t ){
        //base condition
        if(n == 0 || sum == 0){
            
            return t[n][sum];
        }
        
        if(t[n][sum] != -1){
            
            return t[n][sum];
        }
        else{
            if(arr[n-1] <= sum){
                int a = solve(arr, sum-arr[n-1], n-1, t);
                int b = solve(arr,sum, n-1, t);
                t[n][sum] = (a || b);

            }
            else{
                t[n][sum] = solve(arr, sum, n-1, t);
                
            }
            
        }
        return t[n][sum];
    }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n = arr.size();
        // int t[n+1][sum+1] = {-1};
        vector<vector<int>> t( n+1 , vector<int> (sum+1, -1));
        for(int i = 0; i<sum+1; i++){
            t[0][i] = 0;
        }
        for(int i = 0; i<n+1; i++){
            t[i][0] = 1;
        }
        int ans = solve(arr, sum, n, t);
        if(ans == 1){
            return true;
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends