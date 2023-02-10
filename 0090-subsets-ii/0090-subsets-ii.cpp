class Solution {
public:
    void solve(set<vector<int>> &st, int index, vector<int> output, vector<int> nums){
        //base condition
        if(index >= nums.size()){
            st.insert(output);
            return;
        }
         //exclude
         solve(st, index+1, output, nums);

         //include
         output.push_back(nums[index]);
         solve(st, index+1, output, nums);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        vector<int>output;
        set<vector<int>>st;
        int index = 0;
        solve(st, index, output, nums);
        for(auto it = st.begin(); it != st.end(); it++){
            ans.push_back(*it);
        }
        return ans;
    }
};