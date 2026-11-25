class Solution {
public:
    int countDigits(int num) {
        int c=0;
        int m=num;
        while(num!=0){
            int r = num%10;
            if(m%r==0){
                c++;
            }
            num=num/10;
        }
        return c;
    }
};