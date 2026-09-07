class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return 0;

        int total = 0;
        int count = 2;
        int diff = nums[1] - nums[0];

        for (int i = 2; i < n; i++) {
            if (nums[i] - nums[i - 1] == diff) {
                count++; 
            } else {
                
                if (count >= 3) {
                    total += (count - 1) * (count - 2) / 2;
                }
                
                diff = nums[i] - nums[i - 1];
                count = 2;
            }
        }

        if (count >= 3) {
            total += (count - 1) * (count - 2) / 2;
        }

        return total;
    }
};