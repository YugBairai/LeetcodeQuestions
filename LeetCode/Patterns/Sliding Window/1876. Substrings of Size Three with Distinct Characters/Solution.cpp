class Solution {
public:
    int countGoodSubstrings(string s) {

        int cnt=0;
        int freq[26] = {0};

        if(s.size()<3) return 0;

        for (int i = 0; i < s.size() - 2; i++) {
            for (int j = i + 1; j < s.size() - 1; j+=s.size()) {
                for (int k = j + 1; k < s.size(); k+=s.size()) {

                    freq[s[i] - 'a']++;
                    freq[s[j] - 'a']++;
                    freq[s[k] - 'a']++;

                    if (freq[s[i] - 'a'] == 1 && freq[s[j] - 'a'] == 1 &&
                        freq[s[k] - 'a'] == 1) {
                        cnt++;
                    }

                    freq[s[i] - 'a'] = 0;
                    freq[s[j] - 'a'] = 0;
                    freq[s[k] - 'a'] = 0;
                }
            }
        }

        return cnt;
    }
};