class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int maxL = 0;

        // for(int i=0; i<s.size(); i++)
        // {
        //     int seen[128] = {0};

        //     for(int j=i; j<s.size(); j++)
        //     {
        //         char c = s[j];

        //         if(seen[(int)c] == 1) break;

        //         seen[(int)c] = 1;
        //         maxL = max(maxL,j-i+1);
        //     }
        // }

        // return maxL;


        //using sliding window

        int freq[256] = {0};
        int l = 0;

        int ans = 0;

        for(int i=0; i<s.size(); i++){

            freq[s[i]]++;

            while(freq[s[i]]>1){
                freq[s[l]]--;
                l++;
            }

            ans  = max(ans,i-l+1);
        }

        return ans;

       
    }
};