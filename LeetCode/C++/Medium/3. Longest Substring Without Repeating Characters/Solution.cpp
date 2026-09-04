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

        int leng=0;
        vector<bool>freq(256,0);
        int i=0,j=0;


        while(j<s.size())
        {
            while(freq[s[j]])
            {
                freq[s[i]] = 0;
                i++;
            }
            freq[s[j]] = 1;

            leng = max(leng,j-i+1);
            j++;
        }

        return leng;


       
    }
};