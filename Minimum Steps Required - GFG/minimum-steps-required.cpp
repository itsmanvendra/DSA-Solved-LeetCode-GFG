//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string str) {
    // Write your code here.
    int countA = 0;
    int countB = 0;
    int ans = 0;
    // if(str.length() == 1){
    //     return 1;
    // }
    for(int i = 0; i<str.length(); i++){
        if(str[i] == 'a'){
            if(countA == 0){
                countA++;
            }
            else{
                if(countA != 0 && str[i-1] == 'a'){
                    countA++;
                }
                else{
                    
                    ans += 1;
                    countB = 0;
                    countA++;
                }
            }
        }
        else{
            if(countB == 0 ){
                countB++;
            }
            else{
                if(countB != 0 && str[i-1] == 'b'){
                    countB++;
                }
                else{
                    ans += 1;
                    countA = 0;
                    countB++;
                }
            }
        }
        
        
    }
    if(countA != 0){
        ans += 1;
    }
    if(countB != 0){
        ans += 1;
    }

    return ans;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends