//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int appleSequences(int n, int m, string arr){
        // code here 
        int longestSubs = 0;
        int p1 = 0;
        // int p2 = 0;
        vector<int>xD;
        for(int i = 0; i<n; i++){
            if(arr[i] == 'O'){
                xD.push_back(i);
            }
        }
        bool a = false;
        int p3 = 0;
        int count = 0;
        for(int p = 0; p<n; p++){
            if(arr[p] == 'O' && count < m){
                count++;
            }
            else if(arr[p] == 'O' && count >= m){
                longestSubs = max(longestSubs, (p-p1));
                p1 = xD[p3] + 1;
                p3++;
                count--;
                p--;
            }
        }
        longestSubs = max(longestSubs, (n-p1));
        return longestSubs;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M;
        cin >> N >> M;
        string arr;
        cin >> arr;
        
        Solution ob;
        cout << ob.appleSequences(N, M, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends