//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    char profession(long long int level, long long int pos){
        // code here
        //Base Condition
        
   
        
        if(pos==1 || level == 1){
            return 'e';
        }
        long long int ud = pos%2 + pos/2;
        char s = profession(level-1, ud);
        // cout<<level<<" "<<s<<" "<<pos<<endl;
        if(pos%2 == 1){
            return s;
        }
        else{
            if(s == 'd'){
                return 'e';
            }
            else{
                return 'd';
            }
        }
    }
    
        
    
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int level, pos;
        cin>>level>>pos;
        
        Solution ob;
        if(ob.profession(level, pos) == 'd')
            cout<<"Doctor\n";
        else
            cout<<"Engineer\n";
    }
    return 0;
}
// } Driver Code Ends