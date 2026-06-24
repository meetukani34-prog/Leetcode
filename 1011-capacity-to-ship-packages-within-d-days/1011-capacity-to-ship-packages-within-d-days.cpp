class Solution {
public:
bool canship(vector<int>& weights,int days,int cap){
    int daysUsed=1;
    int currload=0;
    for(int w:weights){
        if(currload+w<=cap){
            currload+=w;
        }else{
            daysUsed ++;
            currload=w;
        }
    }
    return daysUsed<=days;

}
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=0;
        int ans=high;
        for(int w:weights)
        high+=w;
        while(low<=high){
           int mid=low+(high-low)/2;
            if(canship(weights,days,mid)){
                high=mid-1;
                ans=mid;
            }
            else{
                low=mid+1;
            }

        }
        return ans;
    }
};