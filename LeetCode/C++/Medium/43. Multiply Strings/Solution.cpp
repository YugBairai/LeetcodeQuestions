class Solution {
public:
    string multiply(string num1, string num2) {
        int n1 = stoi(num1), n2 = stoi(num2);

        int ans = n1*n2;
        string res = "";

        while(ans){
            int d = ans%10;
            res += d+'0';
            ans/=10;
        }

        reverse(res.begin(),res.end());
        return res;
    }
};