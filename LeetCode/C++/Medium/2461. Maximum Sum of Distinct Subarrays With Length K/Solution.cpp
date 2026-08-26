class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        long long maxi = 0;

        for (int i = 0; i <= nums.size() - k; i++) {

            long long sum = 0;
            bool distinct = true;

            for (int j = i; j < i + k; j++) {

                for (int x = i; x < j; x++) {
                    if (nums[x] == nums[j]) {
                        distinct = false;
                        break;
                    }
                }

                if (!distinct)
                    break;

                sum += nums[j];
            }

            if (distinct)
                maxi = max(maxi, sum);
        }

        return maxi;
    }
};