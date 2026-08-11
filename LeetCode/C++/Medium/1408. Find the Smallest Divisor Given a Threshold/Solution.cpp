class Solution {
public:
    bool isValid(vector<int>& nums, int mid, int t) {

        int sum = 0;

        for (int i : nums) {
            sum += (i+mid-1)/mid;
            if(sum>t) return false;
        }

        return true;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {

        int low = 1, high = INT_MIN;

        for (int i : nums) {
            high = max(high, i);
        }
        

        while (low < high) {

            int mid = low + (high - low) / 2;

            if (isValid(nums, mid, threshold)) {
                
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};