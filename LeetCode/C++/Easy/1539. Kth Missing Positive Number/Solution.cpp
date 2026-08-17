class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int l=1,h=arr.size();

        while(l<h){

            int m = l+(h-l)/2;
            int mm = arr[m] - (m+1);

            if(mm<k){
                l = m+1;
            }else{
                h = m;
            }
        }

        return l+k;

    }
};