class Solution {
public:
    int countCommas(int n) {
        long long ans = 0;

        for(long long start = 1000; start <= n; start *= 10) {
            long long end = min((long long)n, start * 10 - 1);

            long long count = end - start + 1;

            int commas = log10(start) / 3;

            ans += count * commas;
        }

        return ans;
    }
};