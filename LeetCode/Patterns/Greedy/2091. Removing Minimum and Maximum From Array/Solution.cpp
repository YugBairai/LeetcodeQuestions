class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        int mini=INT_MAX;
        int mini_idx=-1;

        int maxi=INT_MIN;
        int maxi_idx=-1;

        for(int i=0;i<nums.size();i++){
            
            if(nums[i] < mini){
                mini = nums[i];
                mini_idx=i;
            }

            if(nums[i] > maxi){
                maxi = nums[i];
                maxi_idx = i;
            }
        }

        int ans = INT_MAX;
        int last = max(mini_idx, maxi_idx) + 1;

        ans =min(ans, last);

        last =nums.size() - min(mini_idx, maxi_idx);
        ans = min(ans, last);


        if(mini_idx < maxi_idx) { 
            int total = mini_idx + 1 + (nums.size() - maxi_idx );
            ans = min(total, ans);
        }else{
            int total  = maxi_idx +1 +(nums.size() - mini_idx);
            ans = min(total, ans);
        }
        return ans;
        
    }
};