class Solution {
public:
    int partitionString(string s) {
        int count = 0;
        vector<int>v1(26, 0);
        vector<int>v2(26, 0);
        for(int i = 0; i<s.length(); i++){
            if(v1[s[i]-'a'] == 0){
                v1[s[i]-'a']++;
            }
            else{
                count += 1;
                v1 = v2;
                v1[s[i]-'a']++;
            }
            
        }
        bool a = false;
        for(int i = 0; i<26; i++){
            if(v1[i] != 0){
                a = true;
            }
        }
        if(a){
            count += 1;
        }
        return count;
    }
};