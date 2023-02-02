class Solution {
public:
    map<char, int> mp;
    bool isSorted(string x, string y){
        if(x.size() > y.size()){
            for(int i=0; i<y.size(); i++){
                if(y[i] != x[i]){
                    if(mp[y[i]] < mp[x[i]] ){
                        return false;
                    }
                    else{
                        return true;
                    }
                }
                
            }
            return false;
        }
        else{
            for(int i = 0; i<y.size(); i++){
                if(y[i] != x[i]){
                    if(mp[y[i]] < mp[x[i]] ){
                        return false;
                    }
                    else{
                        return true;
                    }
                }
            }
            return true;
        }
    }
    bool isAlienSorted(vector<string>& words, string order) {
        
        for(int i = 0; i<order.size(); i++){
            mp[order[i]] = i;
        }
        for(int i = 0; i<words.size(); i++){
            for(int j = i+1; j<words.size(); j++){
                // cout<<words[i]<<" "<<words[j]<<endl;
                if(!isSorted(words[i], words[j])){
                    return false;
                }
            }
        }
        return true;
    }
};