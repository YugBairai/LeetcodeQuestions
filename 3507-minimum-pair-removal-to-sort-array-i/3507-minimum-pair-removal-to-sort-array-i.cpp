class Solution {
public:
    void f(vector<int>& nums) {
        int sum = INT_MAX;
        int ind = -1;
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i - 1] + nums[i] < sum) {
                sum = nums[i - 1] + nums[i];
                ind = i;
            }
        }
        nums.erase(nums.begin() + ind);
        nums[ind - 1] = sum;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int ans = 0;
        while (true) {
            int n = nums.size();
            int flag = false;
            for (int i = 1; i < n; i++) {
                if (nums[i - 1] > nums[i]) {
                    ans++;
                    flag = true;
                    break;
                }
            }
            if (!flag)
                break;
            if (flag) {
                f(nums);
            }
        }
        return ans;
    }
};