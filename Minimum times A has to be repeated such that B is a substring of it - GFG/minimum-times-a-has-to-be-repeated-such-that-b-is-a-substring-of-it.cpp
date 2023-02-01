//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//User function Template for C++

class Solution {
  public:
    int minRepeats(string A, string B) {
        // code here
        vector<bool> strA(26, false);
        vector<bool> strB(26, false);
        for(int i = 0; i<A.size(); i++){
            strA[A[i]-'a'] = true;
        }
        for(int i = 0; i<B.size(); i++){
            strB[B[i]- 'a'] = true;
        }
        int count = 0;
        string s = "";
        for(int i = 0; i<26; i++){
            if(strA[i] == false && strB[i] == true){
                return -1;
            }
        }
        if(A.size() < B.size()){
            bool e = false;
            int x = B.size()/A.size();
            int y = B.size()%A.size();
            
            if(y > 0){
                e = true;
                x += 1;
            }
            count = x;
            while(x--){
                
                s += A;
                // cout<<s<<endl;
            }
            string s1 = s.substr(0, B.size());
            string s2;
            for(int i = 0; i<A.size(); i++){
                if(s1 == B){
                    return count;
                }
                else{
                    // cout<<s[B.size() + i]<<B.size()+i<<endl;
                    s1.push_back(s[B.size()+i]);
                    s2 = s1.substr(1, B.size());
                    s1 = s2;
                }
            }
            
            if(e){
                return -1;
            }
            s += A;
            // cout<<s<<endl;
            s1 = s.substr(0, B.size());
            // cout<<s1<<endl;
            count += 1;
            
            for(int i = 0; i<A.size(); i++){
                if(s1 == B){
                    return count;
                }
                else{
                    // cout<<s[B.size() + i]<<B.size()+i<<endl;
                    s1.push_back(s[B.size()+i]);
                    // cout<<s1<<" "<<s1[i]<<endl;
                    
                    s2 = s1.substr(1, B.size());
                    // cout<<s2<<endl;
                    s1 = s2;
                    // cout<<s1<<endl;
                }
            }
            // cout<<"gg";
            return -1;
            // cout<<"Ff"<<endl;
            
            
        }
        
        else if(A.size() == B.size()){
            if(A == B){
                return 1;
            }
            else{
                string s = A;
                s+=A;
                string s1 = s.substr(0, B.size());
                string s2;
                for(int i = 0; i<A.size(); i++){
                if(s1 == B){
                    return 2;
                }
                else{
                    s1.push_back(s[B.size()+i]);
                    s2 = s1.substr(1, B.size());
                    s1 = s2;
                }
                }
                return -1;
            }
        }
        string s1 = A.substr(0, B.size());
        string s2;
            for(int i = 0; i<A.size()-B.size(); i++){
                if(s1 == B){
                    return 1;
                }
                else{
                    // cout<<s1<<endl;
                    s1.push_back(A[B.size()+i]);
                    s2 = s1.substr(1, B.size());
                    s1 = s2;
                }
            }
            
        string s3 = A;
        s3 += A;
        s1 = s3.substr(0, B.size());
            for(int i = 0; i<A.size(); i++){
                if(s1 == B){
                    return 2;
                }
                else{
                    // cout<<s1<<endl;
                    s1.push_back(s3[B.size()+i]);
                    s2 = s1.substr(1, B.size());
                    s1 = s2;
                }
            }
        
        
        return -1;
        
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ",&t);
    while (t--) {
        string A,B;
        getline(cin,A);
        getline(cin,B);

        Solution ob;
        cout << ob.minRepeats(A,B) << endl;
    }
    return 0;
}
// } Driver Code Ends