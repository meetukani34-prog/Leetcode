class Solution {
public:
    bool isPalindrome(int x) {
        int y=x;
        long long r=0;
        if(x<0){
            return false;
        }
        else{
            while(x!=0){
            int digit=x%10;
            r=r*10+digit;
            x=x/10;
        }
        if(r==y){
            return true;
        }
        else{
            return false;
        }
    }
        
    }
};