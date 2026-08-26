class Solution {
public:
    int maxVowels(string s, int k) {
        int i = 0, j = k, p = 0, q = s.size(), ss = i;

        int maxi = 0;
        while (p <= q-k) {
            string tmp = "";

            while (i < k) {
                tmp += s[i];
                i++;
            }

            int v = 0;

            for (char c : tmp) {
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                    v++;
                }
            }

            if (v == k)
                return k;

            maxi = max(v, maxi);

            p++;
            i = ss + 1;
            ss = i;
            k++;
        }

        return maxi;
    }
};