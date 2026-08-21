class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size(), ans = 0, prod = 1;
        int left = 0;
        for (int i = 0; i < n; i++) {
            prod *= nums[i];
            while (left < i && (prod) >= k) {
                prod /= nums[left];
                left++;
            }
            if (left < i || nums[i] < k) {
                ans += i - left + 1;
            }
        }
        return ans;
    }
};