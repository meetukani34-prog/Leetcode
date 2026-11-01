class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) 
    {
        if (arr.size() < 3) return false;
        for (int i = 0; i < arr.size() - 2; i++)
        {
            int nums[3] = {arr[i], arr[i + 1], arr[i + 2]};
            if (nums[0] % 2 && nums[1] % 2 && nums[2] % 2) return true;
        }
        return false;
    }
};