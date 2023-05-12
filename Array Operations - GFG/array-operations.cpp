//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        // code here
        int count = 0;
        int x = 0;
        bool a = false;
        for(int i = 0; i<n; i++){
            if(arr[i] == 0){
                a = true;
            }
        }
        
        if(a){
            for(int i = 0; i<n; i++){
                if(arr[i] != 0){
                    x++;
                }
                else if(arr[i] == 0){
                    if(x != 0){
                        count += 1;
                    }
                    
                    x = 0;
                }
            }
            if(x != 0){
                count += 1;
            }
            return count;
        }
        return -1;
        
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution obj;
        int res = obj.arrayOperations(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends