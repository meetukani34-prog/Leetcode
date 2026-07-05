class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        vector<int> ans;
        sort(nums.begin(),nums.end());
        while(i<n-1){
            if (nums[i]==nums[i+1]){
                i+=2;
            }   
            else{
                ans.push_back(nums[i]);
                i++;
            }
        }
        if (i==n-1){
            ans.push_back(nums[i]);
        }
        return ans;
    }
};