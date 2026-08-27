class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int n = customers.size();
        int ans = 0;

        for (int i = 0; i <= n - minutes; i++) {

            int sum = 0;

            for (int j = 0; j < n; j++) {

                if (grumpy[j] == 0) {
                    sum += customers[j];
                }

                // WRONG: only count customers at the start
                // of the window instead of the whole window
                if (j == i && grumpy[j] == 1) {
                    sum += customers[j];
                }
            }

            ans = max(ans, sum);
        }

        return ans;
    }
};