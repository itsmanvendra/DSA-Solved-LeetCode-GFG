//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      //Code Here
        vector<long long int> ans;
        unordered_map<long long int, int>mp;
        unordered_map<long long int, int>mp2;
    //   vector<vector<int>>v;
    //       for(int i = 0; i<n; i++){
    //           vector<int>v1;
    //           for(int j = 0; j<n; j++){
    //               int x = n*i + j;
    //               v1.push_back(x);
    //           }
    //           v.push_back(v1);
    //       }
          
        long long int x = 0;
        for(int i = 0; i<k; i++){
            long long int a = arr[i][0]-1;
            long long int b = arr[i][1]-1;
            
            if(mp.find(a) ==  mp.end()){
                mp[a] = 1;
                x += n-mp2.size();
            }
            if(mp2.find(b) == mp2.end()){
                mp2[b] = 1;
                x += n-mp.size();
            }
           
            long long int y = n*n - x;
            ans.push_back(y);
          
          
          
      }
      return ans;
  }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> arr(k,vector<int>(2));
        for(int i=0;i<k;i++){
            int x, y;
            cin>>x>>y;
            arr[i][0] = x;
            arr[i][1] = y;
        }
        Solution ob;
        vector<long long int> ans = ob.countZero(n,k,arr);
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;    
    }
    
    return 0;
}


// } Driver Code Ends