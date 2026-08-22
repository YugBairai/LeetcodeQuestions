class Solution {
public:
    bool checkDivisibility(int n) {

        int sum=0,product=1,original=n;
        
        while(n){

            int digit = n%10;
            sum += digit;
            product *= digit;
            n/=10;
        }

        int res = sum+product;

        if((original%res)==0){
            return true;
        }

        return false;
        
    }
};