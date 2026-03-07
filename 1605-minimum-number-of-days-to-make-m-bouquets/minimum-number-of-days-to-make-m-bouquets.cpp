class Solution {
public:

    bool isPossible(vector<int>& bloomDay, int m, int k, int mid, int n) {
        int bouquets = 0;
        int flower = 0;

        for(int i = 0; i < n; i++) {
            if(bloomDay[i] <= mid) {
                flower++;

                if(flower == k) {
                    bouquets++;
                    flower = 0;
                }
            }  else {
                flower = 0;
            } 
        }
        return bouquets >= m ? true : false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();

        if(k > n) {
            return -1;
        }

        int start = *min_element(bloomDay.begin(), bloomDay.end());
        int end = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = -1;

        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(isPossible(bloomDay, m, k, mid, n)) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return ans;
    }
};