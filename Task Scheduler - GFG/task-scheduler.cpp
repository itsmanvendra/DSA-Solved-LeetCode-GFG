//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
        
        // code here
        vector<int> n(26, 0);
        int ans = 0;
        int maxX = 0;
        int count = 0;
        for(int i = 0; i<N; i++){
            n[tasks[i]-'A'] += 1 ;
            if(n[tasks[i]-'A'] > ans){
                ans = n[tasks[i]-'A'];
            }
            
            
        }
        
        // cout<<ans<<endl;
        for(int i = 0; i<26; i++){
            if(n[i] == ans){
                count += 1;
            }
            
        }
        maxX = ans;
        // cout<<maxX<<" "<<count<<" "<<N<<""<<endl;
        
            ans = maxX + (maxX-1)*K + count-1 ;
            return max(ans, N);
        
 
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<char> tasks(N);
        for (int i = 0; i < N; i++) cin >> tasks[i];

        Solution obj;
        cout << obj.leastInterval(N, K, tasks) << endl;
    }
    return 0;
}
// } Driver Code Ends