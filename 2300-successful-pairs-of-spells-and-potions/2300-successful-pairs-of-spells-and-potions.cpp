class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        // sort(spells.begin(), spells.end());
        sort(potions.begin(), potions.end());
        vector<long long int>v1;
        for(int i = 0; i<spells.size(); i++){
            if(success%spells[i]){
                long long int j = success/spells[i];
                j += 1;
                v1.push_back(j);
            }
            else{
                long long int j = success/spells[i];
                v1.push_back(j);
            }
            
            
        }
        vector<int>ans;
        int s = potions.size();
        std::vector<int>::iterator lower1;
        for(int i = 0; i<v1.size(); i++){
            lower1 = std::lower_bound(potions.begin(), potions.end(), v1[i]);
            int x = lower1-potions.begin();
            ans.push_back(s-x);
        }
        return ans;
        
        
        
    }
};