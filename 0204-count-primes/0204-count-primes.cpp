class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        int count = 0;
        vector<bool> isPrime(n + 1, 1);
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i < n; i++)
            if(isPrime[i])
                for (int j = i*2; j < n; j+= i)
                    isPrime[j] = 0;

        for (int i = 2; i < n; i++)
            if (isPrime[i])
                count++;
        
        return count;
    }
};
