class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        
        int diff = INT_MIN, res = INT_MIN;
        int i=0,j=i+1;

        while(i<j && i<size(nums)-1 && j<size(nums)){

            if(nums[i]<=nums[j]){
                diff = max(diff,nums[j]-nums[i]);
                res =  max(res,j-i);
            }

            j++;

            if(j>size(nums)){
                i++;
                j=i+1;
            }
        }

        return res+2;
    }
};