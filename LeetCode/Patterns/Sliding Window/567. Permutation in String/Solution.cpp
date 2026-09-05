class Solution {
public:
    bool checkInclusion(string s1, string s2) {
 
        if (s1.size() > s2.size()) return false;

        int freq1[26] = {0};
        int freq2[26] = {0};

        for (int i = 0; i < s1.size(); i++) {
            freq1[s1[i] - 'a']++;
        }

        for (int i = 0; i < s1.size(); i++) {
            freq2[s2[i] - 'a']++;
        }

        bool same = true;

        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                same = false;
                break;
            }
        }

        if (same) return true;

        for (int right = s1.size(); right < s2.size(); right++) {

            freq2[s2[right] - 'a']++;

            int left = right - s1.size();
            freq2[s2[left] - 'a']--;

            same = true;

            for (int i = 0; i < 26; i++) {
                if (freq1[i] != freq2[i]) {
                    same = false;
                    break;
                }
            }

            if (same) return true;
        }

        return false;
    }
};