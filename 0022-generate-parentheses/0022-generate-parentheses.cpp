class Solution {
public:

    void solve(int n,int l,int r,vector<string>&ans,string &tmp){

        if(r==n && l==n){
            ans.push_back(tmp);
            return;
        }

        if(l<n){
            tmp.push_back('(');
            solve(n,l+1,r,ans,tmp);
            tmp.pop_back();
        }

        if(r<l){
            tmp.push_back(')');
            solve(n,l,r+1,ans,tmp);
            tmp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string tmp;

        solve(n,0,0,ans,tmp);
        return ans;
    }
};