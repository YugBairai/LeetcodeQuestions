class Solution {
public:
    string ans = "";

    void solve(string &s, int index, string target) {

        if (index == s.size()) {

            if (s > target) {
                if (ans == "" || s < ans) {
                    ans = s;
                }
            }

            return;
        }

        for (int i = index; i < s.size(); i++) {

            swap(s[index], s[i]);

            solve(s, index + 1, target);

            swap(s[index], s[i]);
        }
    }

    string lexGreaterPermutation(string s, string target) {

        solve(s, 0, target);

        return ans;
    }
};