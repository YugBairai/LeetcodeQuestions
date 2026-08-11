class Solution {
public:
    bool isValid(int mid, int h, vector<int>& piles) {

        int ch = 0;

        for (int i : piles) {
            if (i % mid == 0) {
                ch += (i / mid);
            } else {
                ch += (i / mid) + 1;
            }
        }

        return ch <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {

        int maxi = INT_MIN;

        for (int i : piles) {
            maxi = max(maxi, i);
        }

        int low = 1, high = maxi;

        while (low < high) {

            int mid = low + (high - low) / 2;

            if (isValid(mid, h, piles)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};