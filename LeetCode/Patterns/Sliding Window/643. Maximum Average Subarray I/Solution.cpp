class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double ans=0;
        double sum=0;

        if(nums.size()<k) return -1;

        for(int i=0; i<k; i++)
        {
            sum+=nums[i];
        }

        ans = sum;

        for(int i=k; i<nums.size(); i++)
        {
            ans += nums[i]-nums[i-k];
            sum = max(ans,sum);
        }

        return sum/k;
    }
};