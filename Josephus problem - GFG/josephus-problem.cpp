//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    void solve(vector<int> xD, int count, int &k, int count1){
        if(xD.size() == 1){
            // cout<<"jj"<<xD.size()<<endl;
            // cout<<xD[0];
            k = xD[0];
            return ;
            // return xD[0];
        }
        
        
        if(count!=k){
            count += 1;
            
            count1 += 1;
            // cout<<count<<" "<<count1<<endl;
            // cout<<xD.size()<<endl;
            if(count1 > xD.size()){
                // count = 0;
                count1 = 1;
            }
             solve(xD, count, k, count1);
        }
        
        else{
            // cout<<xD[count1 -1]<<endl;
            xD[count1 - 1] = -1;
            vector<int> arr;
            for(int i = 0; i<xD.size(); i++){
                if(xD[i] != -1){
                    // cout<<xD[i]<<" ";
                    arr.push_back(xD[i]);
                }
            }
            // cout<<endl;
            // cout<<arr.size()<<endl;
            solve(arr, 0, k, count1-1);
        }
    }
    public:
    int josephus(int n, int k)
    {
       //Your code here
       vector<int> xD;
       for(int i = 0; i<n; i++){
           xD.push_back(i+1);
       }
       int count = 1;
       int count1 = 1;
        solve(xD, count, k, count1);
       return k;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends