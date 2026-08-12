class Solution {
public:
    bool isValid(vector<int>& arr, int mid, int m, int k) {

        int flowers = 0;
        int bouquets = 0;

        for (int i : arr) {

            if (i <= mid) {
                flowers++;

                if (flowers == k) {
                    bouquets++;
                    flowers = 0;
                }
            } else {
                flowers = 0;
            }

            if (bouquets >= m)
                return true;
        }

        return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        if (1LL *m * k > bloomDay.size())
            return -1;

        int low = INT_MAX, high = INT_MIN;

        for (int i : bloomDay) {
            low = min(low, i);
            high = max(high, i);
        }

        while (low < high) {

            int mid = low + (high - low) / 2;

            if (isValid(bloomDay, mid, m, k)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};