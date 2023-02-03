class Solution {
public:
    
    void solve(string s, vector<string> &ans, int index, string st){
        //BASE CONDITION
        
        if(index == s.size()){
            ans.push_back(st);
            return;
        }
        
        
        if(s[index] >= '0' && s[index] <= '9'){
            solve(s, ans, index+1, st+s[index]);
        }
        else{
          string xD = st;
        xD += s[index];
        solve(s, ans, index+1, xD);
        
        //invert the case
        char i = s[index];
        string xDD = st;
        
        if(i>= 'a' && i <= 'z'){
            xDD += toupper(i);
        }
        else{
            xDD += tolower(i);
            
        }
        solve(s, ans, index+1, xDD);
  
    }
        //not invert the case
}
    
    
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        string st = "";
        int index = 0;
        solve(s, ans, index, st);
        return ans;
        
        
    }
};