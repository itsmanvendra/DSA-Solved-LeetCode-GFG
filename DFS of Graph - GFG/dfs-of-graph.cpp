//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(vector<int>&ans, vector<int> adj[], map<int, bool>&mp, int node){
        // cout<<"node "<<node<<endl;
        
        if(adj[node].size()== 1 && adj[node][0] == 0){
            return ;
        }
        // cout<<"size"<<adj[node].size()<<endl;
        for(int i = 0; i<adj[node].size(); i++){
            // cout<<adj[node][i]<<endl;
            if(mp[adj[node][i]] == false){
                mp[adj[node][i]] = true;
                // cout<<"v "<<adj[node][i]<<endl;
                ans.push_back(adj[node][i]);
                dfs(ans, adj, mp, adj[node][i]);
            }
        }
        
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>ans;
        map<int, bool>mp;
        for(int i = 0; i<V; i++){
            if(mp[i] == false){
                mp[i]=true;
                ans.push_back(i);
                for(int j = 0; j<adj[i].size(); j++){
                    if(mp[adj[i][j]] == false){
                        mp[adj[i][j]] = true;
                        ans.push_back(adj[i][j]);
                        dfs(ans, adj, mp, adj[i][j]);
                    }
                }
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
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends