class Solution {
public:
    char repeatedCharacter(string s) {
        int freq[26] = {0};

        for(char c : s){
            if(freq[c-'a']!=0){
                return c;
            }
            freq[c-'a']++;
        }

        return s[0];
    }
};