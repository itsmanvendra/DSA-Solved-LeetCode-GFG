//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:


    bool happyNumber(int n, int N){
        //base condition
        if(1 < n && n < 6){
            return false;
        }
        int p = n;
        int q = 0;
        while(p!=0){
            int z = p%10;
            q += z*z;
            p = p/10;
        }
        if(q == 1){
            return true;
        }
        bool xd = happyNumber(q, N);
        return xd;
        
    }
    
    int nextHappy(int N){
        // code here
        bool a = false;
        int ps = N+1;
        while(!a){
            bool p = happyNumber(ps, N);
            if(p == true){
                a = true;
            }
            else{
               ps++ ;
            }
            
        }
        return ps;
        
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends