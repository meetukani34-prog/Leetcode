class Solution {
public:
    int divide(long long dividend, long long divisor) {
        long long ans = dividend / divisor;
        
        if (ans > INT_MAX) {
            return INT_MAX;
        }
        if (ans < INT_MIN) {
            return INT_MIN;
        }
        
        return ans;
    }
};