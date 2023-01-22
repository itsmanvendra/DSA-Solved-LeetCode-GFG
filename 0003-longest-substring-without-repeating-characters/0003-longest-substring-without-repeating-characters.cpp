class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> v(95, -1);
        int ans = 0;
        int j = 0;
        for(int i = 0; i<s.length(); i++){
            j = max(j, v[s[i] - 32]+1);
            ans = max(ans, i-j+1);
            v[s[i]-32] = i;
        }
        return ans;
    }
};