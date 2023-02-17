//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int N, int K, vector<long long> GeekNum) {
        // code here
        
            int start = 0;
            int end = 0;
            long long sum = 0;
            while(end <N){
                if(end-start < K){
                    sum += GeekNum[end];
                    end++;
                }
                else if(end-start == K){
                    // cout<<GeekNum.size()<<" "<<sum<<endl;
                    if(GeekNum.size()  == end){
                        GeekNum.push_back(sum);
                    }
                    sum -= GeekNum[start];
                    start++;
                }
                
            }
            return GeekNum[N-1];
        
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends