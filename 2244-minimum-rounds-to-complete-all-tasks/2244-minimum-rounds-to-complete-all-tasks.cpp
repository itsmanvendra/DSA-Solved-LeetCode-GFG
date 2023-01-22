class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
         map<int, int> mp;
        int count = 0;
        for(int i=0; i<tasks.size(); i++){
            if(mp.find(tasks[i]) != mp.end()){
                mp[tasks[i]] += 1;
            }
            else{
                mp[tasks[i]] = 1;
            }
        }
        for(auto i = mp.begin(); i != mp.end(); i++){
            int x = i->second;
            int y = x;
            if(x>=3 && x%3 == 0){
                count += x/3;
                // continue;
            }
            else if(x>3 && x%3 == 2){
                count += x/3;
                count += 1;
            }
            else if(x>3 && x%3 == 1){
                x = x-4;
                count += x/3;
                count += 2;

            }
            else if(x>=2 && x%2==0){
                count += x/2;
            }
            else{
                return -1;
            }
        }
        return count;
    }
};