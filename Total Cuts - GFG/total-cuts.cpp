//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
        // Code here
        vector<int> v;
        int miniX = INT_MAX;
        for(int i = N-1; i>=0; i--){
            if(A[i] < miniX){
                miniX = A[i];
            }
            v.push_back(miniX);
        }
        reverse(v.begin(), v.end());
        int count = 0;
        int maxX = A[0];
        for(int i = 0; i<N-1; i++){
            if(maxX < A[i]){
                maxX = A[i];
            }
            if(maxX+v[i+1] >= K){
                count+=1;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        cout<<ob.totalCuts(N,K,A)<<endl;
    }
    return 0;
}
// } Driver Code Ends