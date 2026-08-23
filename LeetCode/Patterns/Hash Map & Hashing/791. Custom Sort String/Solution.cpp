class Solution {
public:
    string customSortString(string order, string s) {
        int n = s.size();

        vector<int> freq(26, 0);
        for (int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }
        
        int i = 0;
        int m = order.size();
        string ans = "";
        int j = 0;
        while (i != n && j != m) {
            if (freq[order[j] - 'a']) {
                while (i != n && j != m && freq[order[j] - 'a']) {
                    ans += order[j];
                    freq[order[j] - 'a']--;
                    i++;
                }
            }
            j++;
        }

        i = 0;
        while (i != n) {
            if (freq[s[i] - 'a']) {

                ans += s[i];
                freq[s[i] - 'a']--;
            }
            i++;
        }
        return ans;
    }
};