//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    

    void solve(set<vector<int>>&st, vector<int> output, int index, vector<int> v, int target){
        //Base Condition
        if(index >= v.size() || target <= 0){
            if(target == 0){
                st.insert(output);
            }
            return;
        }
        //include
        output.push_back(v[index]);
        target -= v[index];
        solve(st, output, index, v, target);
        target += v[index];
        output.pop_back();

        //exclude
        solve(st, output, index+1, v, target);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> v;
        set<int>s;
        sort(candidates.begin(), candidates.end());
        for(int i = 0; i<candidates.size(); i++){
            if(candidates[i] <= target){
                s.insert(candidates[i]);
            }
            else{
                break;
            }
        }
        for(auto i = s.begin(); i!=s.end(); i++){
            v.push_back(*i);
        }
        vector<vector<int>> ans;
        vector<int> output;
        set<vector<int>>st;
        int index = 0;
        solve(st, output, index, v, target);
        for(auto it = st.begin(); it != st.end(); it++){
            ans.push_back(*it);
        }
        return ans;

    }
    
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends