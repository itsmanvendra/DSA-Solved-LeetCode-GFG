//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	    reverse(s.begin(),s.end());
	    int k=0;
	    
	    for(int i=0;i<s.size();i++){
	        if(s[i]=='1'){
	            if(i%2)k+=2;
	            else k++;
	            
	            k%=3;
	        }
	    }
	    
	    return k%3?0:1;
	    
	    
	    
	    
	}

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends