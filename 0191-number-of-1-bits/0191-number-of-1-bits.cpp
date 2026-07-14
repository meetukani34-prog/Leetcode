class Solution {
public:
    int hammingWeight(int n) {
        int count =0;
        while(n>0){
            // check if last bit (i.e. next shifting bit) is 1
            if(n&1 == 1) count++;
            n=n>>1;
        }
        return count;
    }
};

// Method 1: Convert decimal into binary & count 1's
/*
int hammingWeight(int n) {
    int count = 0;
    while(n>0){
        if(n%2 == 1) count++;
        n=n/2;
    }
    return count;
}
*/

// Method 2: Right shift till n==0. To check if last bit is 1 => If n&1 == 1, yes else no
/*
int hammingWeight(int n) {
    int count =0;
    while(n>0){
        // check if last bit (i.e. next shifting bit) is 1
        if(n&1 == 1) count++;
        n=n>>1;
    }
    return count;
}
*/