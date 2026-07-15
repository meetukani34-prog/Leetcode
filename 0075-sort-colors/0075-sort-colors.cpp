class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size(),l=0,m=0,h=n-1;
        while(m<=h){
            if (nums[m]==0){
                int t;
                t=nums[l];
                nums[l]=nums[m];
                nums[m]=t;
                l++;
                m++;
            }
            else if (nums[m]==1){
                m++;
            }
            else{
                int t1;
                t1=nums[m];
                nums[m]=nums[h];
                nums[h]=t1;
                h--;
            }
        }
        
    }
};