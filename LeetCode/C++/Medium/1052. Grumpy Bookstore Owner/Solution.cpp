class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int n = customers.size();

        // Customers who are already satisfied
        int alreadySatisfied = 0;

        for(int i = 0; i < n; i++) {
            if(grumpy[i] == 0) {
                alreadySatisfied += customers[i];
            }
        }

        // First window: extra customers we can satisfy
        int extra = 0;

        for(int i = 0; i < minutes; i++) {
            if(grumpy[i] == 1) {
                extra += customers[i];
            }
        }

        int maxExtra = extra;

        // Slide the window
        for(int i = minutes; i < n; i++) {

            // Add new customer
            if(grumpy[i] == 1) {
                extra += customers[i];
            }

            // Remove old customer
            if(grumpy[i - minutes] == 1) {
                extra -= customers[i - minutes];
            }

            maxExtra = max(maxExtra, extra);
        }

        return alreadySatisfied + maxExtra;
    }
};