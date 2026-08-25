class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        int n = nums.size();

        sort(nums.begin(), nums.end());

        int multiple = 1;

        for (int i = 0; i < n; i++) {
            if (nums[i] / k > multiple) {
                return multiple * k;
            } else if (nums[i] == k * multiple) {
                multiple++;
            }
        }
        
        return multiple * k;
    }
};