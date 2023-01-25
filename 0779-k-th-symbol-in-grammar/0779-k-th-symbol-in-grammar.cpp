class Solution {
public:
    
    int kthGrammar(int n, int k) {
       //Base Condition
        
        if(k==1 || n == 1){
            return 0;
        }
        int d = k%2 + k/2;
        int s = kthGrammar(n-1, d);
        if(k%2 == 1){
            return s;
        }
        else{
            if(s == 0){
                return 1;
            }
            else{
                return 0;
            }
        }
    }
};