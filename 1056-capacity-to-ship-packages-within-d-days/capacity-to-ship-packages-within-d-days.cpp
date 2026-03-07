class Solution {
public:

    bool isValid(vector<int>& weights, int days, int mid, int n) {
        int daysNeeded = 1;
        int currentLoad = 0;

        for(int i = 0; i < n; i++) {

            if(mid < weights[i]) {
                return false;
            }
            
            if(currentLoad + weights[i] <= mid) {
                currentLoad += weights[i];
            } else {
                daysNeeded++;
                currentLoad = weights[i];
            }

            if(daysNeeded > days) {
                return false;
            }
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();

           if(days > n) {
            return-1;
        }
        
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum = sum + weights[i];
        }

        int start = *max_element(weights.begin(), weights.end());
        int end = sum;
        int ans = -1;

        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(isValid(weights, days, mid, n)) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
};