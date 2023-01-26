//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        string lowerCase = "";
        string upperCase = "";
        for(int i = 0; i<n; i++){
            if(str[i] >= 'a' && str[i]<='z'){
                lowerCase += str[i];
            }
            else{
                upperCase += str[i];
            }
        }
        sort(lowerCase.begin(), lowerCase.end());
        // cout<<lowerCase<<" "<<upperCase<<endl;
        sort(upperCase.begin(), upperCase.end());
        string ans = "";
        int countL = 0;
        int countU = 0;
        for(int i = 0; i<n; i++){
            if(str[i] >= 'a' && str[i] <='z'){
                ans += lowerCase[countL];
                countL++;
            }
            else{
                ans += upperCase[countU];
                countU++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends