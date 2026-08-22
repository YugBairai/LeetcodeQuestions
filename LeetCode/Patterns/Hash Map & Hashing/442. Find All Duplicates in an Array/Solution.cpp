class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;

        sort(nums.begin(),nums.end());

        for(int i=1; i<size(nums); i++){
            if(nums[i-1]==nums[i]){
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};