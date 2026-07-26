class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int actualSum = 0;

        for(int i=0; i<nums.size(); i++) {
            sum += i+1;
            actualSum += nums[i];
        }

        int num = sum - actualSum;
        return num;
    }
};