//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{   private:
    void subsets(vector<int> arr, int n, vector<int> output, set<vector<int>> &s, int index){
        //base case
        if(index == n){
            s.insert(output);
            return;
        }
        subsets(arr, n, output, s, index+1);
        int x = arr[index];
        output.push_back(x);
        subsets(arr, n, output,s, index+1);
        
}
    public:
    //Function to find all possible unique subsets.
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        // code herein 
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        vector<int> output;
        set<vector<int>>s;
        int index = 0;
        subsets(arr,n, output, s, index);
        for(auto itr = s.begin(); itr != s.end(); itr++){
            ans.push_back(*itr);
        }
        sort(ans.begin(), ans.end());
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
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
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