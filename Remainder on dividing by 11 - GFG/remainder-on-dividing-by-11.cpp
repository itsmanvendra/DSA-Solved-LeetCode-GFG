//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++


class Solution
{

public:
    int xmod11(string x)
    {
       // code here
       long long int x1 = 0;
       long long int y1 = 0;
       
       for(int i = x.size()-1; i>=0; i -= 2){
           char z = x[i];
           int d = z-'0';
           x1 += d;
       }
       for(int i = x.size()-2; i>=0; i-=2){
           char z = x[i];
           int d = z-'0';
           y1 += d;
       }
        // cout<<x1<<endl;
        // cout<<y1<<endl;
        int sum = ((x1-y1)%11 + 11)%11;
        return sum;
        
    
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin>>x;
        Solution ob;
        int ans = ob.xmod11(x);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends