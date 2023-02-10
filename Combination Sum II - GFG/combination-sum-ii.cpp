//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
        void solve(set<vector<int>>&st, vector<int>output, int index, vector<int>v, int target, unordered_map<int, int>&mp){
        if(index>=v.size() || target <= 0){
            if(target == 0){
                st.insert(output);
            }
            return ;
        }
        //include
        if(target -v[index] >= 0){
            
            output.push_back(v[index]);
            target -=v[index];
            mp[v[index]]--;
            solve(st, output, index+1, v, target, mp);
            output.pop_back();
            target += v[index];
            mp[v[index]]++;
            

            //exclude
            int p = mp[v[index]];
            
            solve(st, output, index+p, v, target, mp);
        }
        
    }
    vector<vector<int>> CombinationSum2(vector<int> candidates,int n,int target)
    {
        //code here
        vector<int>v;
        vector<vector<int>>ans;
        unordered_map<int, int>mp;
        sort(candidates.begin(), candidates.end());
        // int k = target;
        int sum1 = 0;
        for(int i=0; i<candidates.size(); i++){
            if(candidates[i] <= target){
                v.push_back(candidates[i]);
                sum1 += candidates[i];
                mp[candidates[i]]++;
            }
            else{
                break;
            }
        }
        vector<int>output;
        set<vector<int>>st;
        int index = 0;
        if(sum1 < target){
            return ans;
        }
        else{
            solve(st, output, index, v, target, mp);
            for(auto it = st.begin(); it!=st.end(); it++){
                ans.push_back(*it);
            }
            return ans;
        }
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        auto obj=ob.CombinationSum2(arr,n,k);
        for(int i=0;i<obj.size();i++)
        {
            for(int j=0;j<obj[i].size();j++)
            {
                cout<<obj[i][j]<<" ";
            }
            cout<<"\n";
        }
        if(obj.size()==0) cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends