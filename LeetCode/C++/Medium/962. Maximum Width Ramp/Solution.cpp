class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {

        int ans = 0;

        for (int i = 0; i < size(nums); i++) {
            for (int j = i + 1; j < size(nums); j++) {
                if(nums[i]<=nums[j]){
                    ans = max(ans,j-i);
                }
            }
        }

        return ans;
    }
};