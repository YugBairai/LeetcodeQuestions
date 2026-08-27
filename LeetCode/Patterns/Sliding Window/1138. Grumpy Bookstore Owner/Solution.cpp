class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int n = customers.size();
        int ans = 0;

        for (int i = 0; i <= n - minutes; i++) {

            int sum = 0;

            for (int j = 0; j < n; j++) {

                if (j >= i && j < i + minutes) {
                    sum += customers[j];
                }
                else {
                    if (grumpy[j] == 0) {
                        sum += customers[j];
                    }
                }
            }

            ans = max(ans, sum);
        }

        return ans;
    }
};