class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {

        int n = nums.size();

        vector<int> values = nums;
        vector<int> index(n);

        for(int i = 0; i < n; i++) {
            index[i] = i;
        }

        sort(values.begin(), values.end());

        
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(nums[index[i]] > nums[index[j]]) {
                    swap(index[i], index[j]);
                }
            }
        }

        int start = 0;

        while(start < n) {

            int end = start;

            while(end + 1 < n &&
                  values[end + 1] - values[end] <= limit) {
                end++;
            }

           
            vector<int> group;

            for(int i = start; i <= end; i++) {
                group.push_back(index[i]);
            }

            sort(group.begin(), group.end());

            for(int i = start; i <= end; i++) {
                nums[group[i - start]] = values[i];
            }

            start = end + 1;
        }

        return nums;
    }
};