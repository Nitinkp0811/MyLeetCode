class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;

        for(long long start = 1000; start <= n; start *= 10) {
            long long end = min(n, start * 10 - 1);

            long long count = end - start + 1;

            long long commas = log10(start) / 3;

            ans += commas * count;
        }

        return ans;
    }
};