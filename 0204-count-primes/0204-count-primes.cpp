class Solution {
public:
    int countPrimes(int n) {
        int c=0;
        vector<bool> a(n+1,true);
        for(int i=2;i<n;i++){
            if(a[i]){
                c++;
                for(int j=i*2;j<n;j=j+i){
                    a[j] = false;
                }
            }
        }
        return c;
    }
};
