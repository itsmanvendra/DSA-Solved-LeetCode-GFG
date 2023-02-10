//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void solve(vector<vector<int>> &ans, vector<int>v, vector<int>output, int index, int sum, int N, int K){
        //Base Condition
        if(index >= v.size() || sum >= N ){
            if(sum == N && output.size() == K){
                ans.push_back(output);
                
            }
            return;
        }    
        output.push_back(v[index]);
        sum += v[index];
        solve(ans, v, output, index+1, sum, N, K);
        sum -= v[index];
        output.pop_back();
            
        solve(ans,v,output, index+1, sum, N, K);
        
    }
    vector<vector<int>> combinationSum(int K, int N) {
        // code here
        vector<int>v;
        for(int i = 0; i<9; i++){
            v.push_back(i+1);
        }
        vector<vector<int>> ans;
        vector<int>output;
        int index = 0;
        int sum = 0;
        solve(ans, v, output, index, sum, N, K);
        // cout<<ans.size()<<endl;
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends