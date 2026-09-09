class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int n = customers.size();
        int x = n-minutes;

        int sum = 0;

        for(int i=x; i<customers.size(); i++){
            sum+=customers[i];
        }

        for(int i=0; i<x; i++){
            if(grumpy[i]==0){
                sum+=customers[i];
            }
        }

        return sum;
    }
};