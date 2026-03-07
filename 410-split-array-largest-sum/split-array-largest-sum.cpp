class Solution {
public:

    bool isValid(vector<int>& nums, int k, int mid, int n) {
        if(k > n) {
            return false;
        }

        int subArray = 1;
        int currSum = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] > mid) {
                return false;
            }
            
            if(currSum + nums[i] <= mid) {
                currSum += nums[i];
            } else {
                subArray++;
                currSum = nums[i];
            }
        }
        return subArray > k ? false : true;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();

        if(k > n) {
            return -1;
        }
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += nums[i];
        }

        int start = 0;
        int end = sum;
        int ans = -1;

        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(isValid(nums, k, mid, n)) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return ans;
    }
};