class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st1;

        for (char c : s) {
            if (c != ')') {
                st1.push(c);
            } else {
                string rev = "";

                while (st1.top() != '(') {
                    rev += st1.top();
                    st1.pop();
                }

                st1.pop();

                for (char ch : rev) {
                    st1.push(ch);
                }
            }
        }

        string res = "";
        while (!st1.empty()) {
            res += st1.top();
            st1.pop();
        }

        reverse(res.begin(), res.end());
        return res;
    }
};