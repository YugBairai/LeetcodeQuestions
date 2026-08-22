class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n= nums.size();
        int i=0;
        while(i<n){
            int correctidx=0;
            if (nums[i] < 1 || nums[i] > n) {
                i++;
                continue;
            }
            correctidx = nums[i]-1;
            if(nums[correctidx]==nums[i]) i++;
            else{
                swap(nums[correctidx],nums[i]);
            }
        }
        int ans=n+1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i+1){
                ans =i+1;
                break;
            }
        }
        return ans;
    }
};