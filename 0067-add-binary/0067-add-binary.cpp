class Solution {
public:
    void solve(string &ans, char carry, string x, string y ){
        int index = 0;
        for(int i=0; i<y.length(); i++){
            if(x[i]=='0' && y[i] == '0'){
                if(carry == '0'){
                    ans.push_back('0');
                }
                else{
                    ans.push_back('1');
                    carry = '0';
                }
            }
            else if((x[i]=='0' && y[i] == '1')||(x[i]=='1' && y[i] == '0')){
                if(carry == '0'){
                    ans.push_back('1');
                }
                else{
                    ans.push_back('0');
                    carry = '1';
                }
            }
            else if(x[i]=='1' && y[i] == '1'){
                if(carry == '0'){
                    ans.push_back('0');
                    carry = '1';
                }
                else{
                    ans.push_back('1');
                    carry = '1';
                }
            }
            index += 1;
            
        }
        for(int i = index; i<x.length(); i++){
            if( x[i] == '0'){
                if(carry == '0'){
                    ans.push_back('0');
                }
                else{
                    ans.push_back('1');
                    carry = '0';
                }
            }
            else{
                if(carry == '0'){
                    ans.push_back('1');
                }
                else{
                    ans.push_back('0');
                    carry = '1';
                }
                
            }
        }
        if(carry == '1'){
            ans.push_back('1');
        }
        
        
    }
    string addBinary(string a, string b) {
        
        string x = a;
        string y = b;
        reverse(x.begin(), x.end());
        reverse(y.begin(), y.end());
        string ans = "";
        char carry = '0';
        if(a.length() >= b.length()){
            solve(ans, carry, x, y );
        }
        else{
            solve(ans, carry, y, x);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};