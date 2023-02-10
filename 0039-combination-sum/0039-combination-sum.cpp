class Solution {
public:
    set<vector<int>>st;

    void solve(set<vector<int>>&st, vector<int> output, int index, vector<int> v, int target){
        //Base Condition
        if(index >= v.size() || target <= 0){
            if(target == 0){
                st.insert(output);
            }
            return;
        }
        //include
        output.push_back(v[index]);
        target -= v[index];
        solve(st, output, index, v, target);
        target += v[index];
        output.pop_back();

        //exclude
        solve(st, output, index+1, v, target);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> v;
        sort(candidates.begin(), candidates.end());
        for(int i = 0; i<candidates.size(); i++){
            if(candidates[i] <= target){
                v.push_back(candidates[i]);
            }
            else{
                break;
            }
        }
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(st, output, index, v, target);
        for(auto it = st.begin(); it != st.end(); it++){
            ans.push_back(*it);
        }
        return ans;

    }
};