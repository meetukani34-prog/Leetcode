class Solution {
public:
    bool match(int freq1[26], int freq2[26]) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        if (s2.size() < s1.size()) return false;

        int freq1[26] = {0};
        int freq2[26] = {0};

        // Fill frequency array for s1
        for (char c : s1) {
            freq1[c - 'a']++;
        }

        int left = 0;
        for (int right = 0; right < s2.size(); right++) {
            freq2[s2[right] - 'a']++;

            // Shrink window if it exceeds s1's length
            if (right - left + 1 > s1.size()) {
                freq2[s2[left] - 'a']--;
                left++;
            }

            // Exactly the same check, but return true immediately!
            if (right - left + 1 == s1.size() && match(freq1, freq2)) {
                return true;
            }
        }

        return false;
    }
};