//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minVal(int a, int b) {
        // code here
        int x = a;
        int y = b;
        int setBitA = 0;
        int setBitB = 0;
        while(x){
            if(x%2 == 1){
                setBitA += 1;
            }
            x = x/2;
        }
        while(y){
            if(y%2 == 1){
                setBitB += 1;
            }
            y = y/2;
        }
        // cout<<setBitB<<" "<<setBitA<<endl;
        if(setBitB == setBitA){
            return a;
        }
        else if(setBitA > setBitB){
            x = a;
            int index = 0;
            
            int count = 0;
            while(setBitA > setBitB){
                int d = 0;
                if(x%2 == 1){
                    d = pow(2, index);
                    setBitA -= 1;
                    
                }
                count += d;
                x = x/2;
                index++;
            }
            return a - count;
            
        }
        else{
            x = a;
            int count = 0;
            int index = 0;
            
            while(setBitA < setBitB){
                int d = 0;
                if(x%2 == 0){
                    d = pow(2, index);
                    setBitA += 1;
                }
                x = x/2;
                count += d;
                index++;
            }
            return a + count;
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends