class Solution {
public:
    int countCommas(int n) {

        
        int ans = 0;

        for(int i = 1; i <= n; i++)
        {
            string s = to_string(i);
            int len = s.length();

            int commas = (len - 1) / 3;
            ans += commas;
        }

        return ans;
    }
};