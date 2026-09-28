class Solution {
public:
    int maxDepth(string s) {
        int maxi=0;
        int cnt = 0;

        stack<char>st;

        for(char c : s){
            if(c=='('){
                cnt++;
                maxi = max(maxi,cnt);
                st.push(c);
            }else if(c==')'){
                cnt--;
                st.pop();
            }
        }

        return maxi;
    }
};