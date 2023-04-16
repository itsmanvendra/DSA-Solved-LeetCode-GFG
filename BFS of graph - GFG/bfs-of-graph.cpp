//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        map<int, vector<int>>mp;
        for(int i = 0; i<V; i++){
            for(int j = 0; j<adj[i].size(); j++){
                mp[i].push_back(adj[i][j]);
                // cout<<i<<" "<<adj[i][j]<<" ";
            }
            // cout<<endl;
            
        }
        
        vector<int>ans;
        map<int, bool>visited;
        for(int  i = 0; i<1; i++){
            queue<int>q;
            if(!visited[i]){
                q.push(i);
                visited[i] = true;
            }
            while(!q.empty()){
                int x = q.front();
                ans.push_back(x);
                for(int j = 0; j<mp[x].size(); j++){
                    if(!visited[mp[x][j]]){
                        q.push(mp[x][j]);
                        visited[mp[x][j]] = true;
                    }
                }
                q.pop();
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends