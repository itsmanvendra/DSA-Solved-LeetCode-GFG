class Solution {
public:
    void solve(vector<vector<int>> &ans, vector<int> output, vector<int>nums, int index){
        //Base Condition
        if(index >= nums.size()){
            ans.push_back(output);
            return ;
        }
        
        for(int i = index; i<nums.size(); i++){
            swap(nums[index], nums[i]);
            output.push_back(nums[index]);
            solve(ans, output, nums, index+1);
            output.pop_back();

            
            
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(ans, output, nums, index);
        return ans;
    }
};