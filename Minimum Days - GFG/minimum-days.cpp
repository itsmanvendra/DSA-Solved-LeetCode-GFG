//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int getMinimumDays(int N,string S, vector<int> &P) {
        // code here
        int ans = 0;
        unordered_map<int, int>mp;
        for(int i = 0; i<N; i++){
            mp[P[i]] = i;
        }
        for(int i = 0; i<N-1; i++){
            if(S[i] == S[i+1]){
                int x = min(mp[i], mp[i+1]);
                // cout<<x<<endl;
                if(x == i+1){
                    S[i+1] = '?';
                }
                else{
                    S[i] == '?';
                }
                ans = max(ans,x);
                
            }
        }
        if(ans != 0){
            return ans+1;
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        string S;cin>>S;
        
        vector<int> P(N);
        Array::input(P,N);
        
        Solution obj;
        int res = obj.getMinimumDays(N,S, P);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends