class Solution {
public:
    bool check(vector<int>&nums,int maxsum,int k){
        int sum=0;
        int cnt=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>maxsum){
                cnt++;
                sum=nums[i];
                if(cnt>k) return false;
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=INT_MIN;
        int high=0;
        for(int i=0;i<nums.size();i++){
            low=max(low,nums[i]);
            high+=nums[i];
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(nums,mid,k)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};