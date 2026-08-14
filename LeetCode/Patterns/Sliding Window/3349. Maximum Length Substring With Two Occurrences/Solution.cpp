class Solution {
public:
    int maximumLengthSubstring(string s) {
        int freq[26] = {};

        int left = 0;

        int ans = 0;

        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;

            while (freq[s[i] - 'a'] > 2) {
                freq[s[left] - 'a']--;

                left+;
            }

            ans = max(ans, i - left + 1);
        }

        return ans;
    }
};