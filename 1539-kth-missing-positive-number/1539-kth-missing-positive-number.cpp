class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 0, high = arr.size() - 1;

        while(low <= high){
            int mid = low + (high - low) / 2;
            int cnt_missing = arr[mid] - (mid+1);
            if(cnt_missing >= k){
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return low + k;
    }
};