class Solution {
public:
    bool checkPerfectNumber(int num) {
        
        vector<int>tmp;

        for(int i=1; i<
        =num/2; i++){
            if(num%i==0){
                tmp.push_back(i);
            }
        }

        int sum = 0;
        for(int i=0; i<tmp.size(); i++){
            sum += tmp[i];
        }

        if(sum==num) return true;
        else return false;
    }
};