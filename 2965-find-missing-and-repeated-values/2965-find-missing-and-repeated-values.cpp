class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> freq(n * n +1, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                freq[grid[i][j]]++;
            }
        }

        int a, b;

        for (int x = 1; x <= n * n; x++) {
            if (freq[x] == 2)
                a = x;
            else if (freq[x] == 0)
                b = x;
        }

        return {a, b};
    }
};