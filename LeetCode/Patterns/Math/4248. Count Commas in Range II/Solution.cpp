class Solution {
public:
    long long countCommas(long long n) {
            
        long long first = n; 
        
        long long ans = 0;
        long long start = 1000;
        int commas = 1;

        while(start <= first)
        {
            long long end = start * 1000 - 1;
            
            long long limit = min(first, end);
            
            if(limit >= start)
            {
                long long count = limit - start + 1;
                ans += count * commas;
            }

            start *= 1000;
            commas++;
        }

        return ans;
    }
};