class Solution {
public:
    int reverseInt(int x){
        int a = 0;
         while (x != 0){
            if ((a > INT_MAX / 10)||(a < INT_MIN/10)){
                a = 0;
                break;
            }
            a = (a*10) + (x%10);
            
            x = x/10;
            
        }
        
        return a;
    }
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        int a = reverseInt(x);
        if(a == x){
            return true;
        }
        return false;
    }
};