class Solution {
public:
    int mySqrt(int x) {
        int low = 0,high = x;

        while (low <= high) {
            int m = low + (high - low) / 2;
            long long sq = (long long)m * m;

            if (sq == x) {
                return m;
            } else if (sq < x) {
                low = m + 1;
            } else {
                high = m - 1;
            }
        }
        return high;
    }
};