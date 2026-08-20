class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i=1;

        for(int j=1; j<size(nums); j++){
            if(nums[j]!=nums[i-1]){
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};