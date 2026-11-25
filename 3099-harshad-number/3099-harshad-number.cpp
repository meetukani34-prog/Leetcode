class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int remainder,sum=0,n=x;
        while(n!=0){
            remainder=n%10;
            sum=sum+remainder;
            n=n/10;
        }
        if(x%sum==0){
            return sum;
        }
        return -1;
    }
};