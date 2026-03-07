class Solution {
public:

    bool isValid(vector<int>& piles, int h, int mid, int n) {
        long long hour = 0;

        for(int i = 0; i < n; i++) {
            hour += (piles[i] + mid - 1) / mid;
        }
        return hour <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();

        int start = 1;
        int end = *max_element(piles.begin(), piles.end());
        int ans = -1;

        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(isValid(piles, h, mid, n)) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return ans;
    }
};