//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumSum(string s) {
        // code here
        int start = 0;
        int end = s.length()-1;
        while(start <= end){
            if(s[start] == s[end]){
                start++;
                end--;
            }
            else{
                if(s[start]== '?' && s[end] != '?'){
                    s[start]=s[end];
                }
                else if(s[start] != '?' && s[end] == '?'){
                    s[end] = s[start];
                }
                else{
                    return -1;
                }
            }
        }
        char xD = 'A';
        // cout<<s<<endl;
        start = 0;
        end = s.length()-1;
        int count = 0;
        while(start <=end){
            if(s[start] != '?' && xD != 'A'){
                if(s[start] == xD){
                    start++;
                    end--;
                }
                else{
                    count += abs((s[start]-'a') - (xD - 'a'));
                    xD=s[start];
                    start++;
                    end--;
                }
            }
            else if(s[start]!='?' && xD=='A'){
                xD = s[start];
                start++;
                end--;
            }
            else if(s[start] == '?' && xD == 'A'){
                start++;
                end--;
            }
            else if(s[start] == '?' && xD != 'A'){
                start++;
                end--;
            }
        }
        return 2*count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        int ans = ob.minimumSum(s);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends