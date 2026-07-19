class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxpro=0;
       int minpri=prices[0];
       for(int i=0;i<prices.size();i++){
           minpri=min(minpri,prices[i]);
           int pro=prices[i]-minpri;
           maxpro=max(pro,maxpro);
       }
       return maxpro;
    }
};