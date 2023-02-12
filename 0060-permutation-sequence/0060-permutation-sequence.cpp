class Solution {
public:
    void solve(string&v, string output, int index, string s, int &count, bool a, int k){
        if(index >= s.length() || count >= k){
            count += 1;
            // v.push_back(output);
            if(count == k){
                a = true;
                v = output;
            }
            return;
        }
        
        
        for(int i = index; i<s.length(); i++){
            
            if(a){
                return;
            }
            swap(s[i], s[index]);
            output += s[index];
            solve(v, output, index+1, s, count, a, k);
            
            output.pop_back();
            
        }
    }
    string getPermutation(int n, int k) {
        string s = "";
        for(int i = 0; i<n; i++){
            s += static_cast<char>(48+i+1);
        }
        
        string v;
        string output = "";
        int index = 0;
        int count=0;
        bool a = false;
        solve(v, output, index, s, count, a, k);
        return v;
    }
};