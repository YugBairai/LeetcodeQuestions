class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();

    
        int evenCount = 0, oddCount = 0;

        for(int i = 0; i < n; i++) {
            if(nums1[i] % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }

       
        if(n >= 2) return true;

       
        return true;

    }
};