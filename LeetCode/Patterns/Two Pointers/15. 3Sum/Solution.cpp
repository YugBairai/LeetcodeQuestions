class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> res;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < size(nums) - 2; i++) {

            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int s = i + 1, e = size(nums) - 1;

            while (s < e) {

                int sum = nums[i] + nums[s] + nums[e];

                if (sum == 0) {

                    res.push_back({nums[i], nums[s], nums[e]});

                    while (s < e && nums[s] == nums[s + 1]) {
                        s++;
                    }

                    while (s < e && nums[e] == nums[e - 1]) {
                        e--;
                    }

                    s++;
                    e--;
                } else if (sum < 0) {

                    s++;

                } else {

                    e--;
                }
            }
        }

        return res;
    }
};