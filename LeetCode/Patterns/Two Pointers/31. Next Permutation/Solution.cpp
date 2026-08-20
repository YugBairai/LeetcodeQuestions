class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int n = nums.size();
        int idx = -1;

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                idx = i;
                break;
            }
        }

        // No next permutation
        if (idx == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // 2. Find element just greater than pivot
        for (int i = n - 1; i > idx; i--) {
            if (nums[i] > nums[idx]) {
                swap(nums[i], nums[idx]);
                break;
            }
        }

        // 3. Reverse the suffix
        reverse(nums.begin() + idx + 1, nums.end());
    }
};