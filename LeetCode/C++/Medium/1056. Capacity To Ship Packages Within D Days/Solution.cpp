class Solution {
public:
    bool isValid(vector<int>& arr, int days, int c) {
        int day = 1, sum = 0;

        for (int i : arr) {
            if (sum+i > c) {
                day++;
                sum = i;
            }else{
                sum+=i;
            }
        }

        return day <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {

        int low = 0, high = 0;

        for (int i : weights) {
            high+=i;
            low = max(low, i);
        }

        int ans = INT_MAX;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (isValid(weights, days, mid)) {
                ans = min(ans, mid);
                high = mid-1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};