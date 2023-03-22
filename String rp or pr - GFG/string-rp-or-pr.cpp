//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    long long solve(int X,int Y,string S){
      //code here
        stack<char>stX;
        stack<char>stY;
        long long countX = 0;
        long long countY = 0;
        string s = "";
        for(int i = 0; i<S.size(); i++){
            if(!stX.empty() && stX.top() == 'p' && S[i] == 'r'){
                countX += X;
                stX.pop();
                s.pop_back();
            }
            else{
                stX.push(S[i]);
                s.push_back(S[i]);
            }
        }
        reverse(s.begin(), s.end());
        stack<char>sTX;
        for(int i = 0; i<s.size(); i++){
            if(!sTX.empty() && sTX.top() == 'p' && s[i] == 'r'){
                countX += Y;
                sTX.pop();
                
            }
            else{
                sTX.push(s[i]);
            }
        }
        
        
        s = "";
        for(int i = 0; i<S.size(); i++){
            if(!stY.empty() && stY.top() == 'r' && S[i] == 'p'){
                countY += Y;
                stY.pop();
                s.pop_back();
            }
            else{
                stY.push(S[i]);
                s.push_back(S[i]);
            }
        }
        // cout<<s<<endl;
        reverse(s.begin(), s.end());
        // cout<<s<<endl;
        stack<char> sTY;
        for(int i = 0; i<s.size(); i++){
            if(!sTY.empty() && sTY.top() == 'r' && s[i] == 'p'){
                countY += X;
                sTY.pop();
            }
            else{
                sTY.push(s[i]);
            }
        }
        
        long long answer = max(countX, countY);
        return answer;
      
    }
};

//{ Driver Code Starts.
signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int X,Y;
      cin>>X>>Y;
      string S;
      cin>>S;
      Solution obj;
      long long answer=obj.solve(X,Y,S);
      cout<<answer<<endl;
  }
}
// } Driver Code Ends