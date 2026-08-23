class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        
        int n = size(candyType)/2;

        sort(candyType.begin(),candyType.end());

        int cnt=1;

        for(int i=1; i<candyType.size(); i++){
            if(candyType[i-1]!=candyType[i]) cnt++;
        }

        if(cnt>n) return n;
        else return cnt;


    }
};