class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        long long totalSum = 0;

        for(int i = 0; i < n; i++) {
            totalSum += nums[i];
        }

        long long leftSum = 0;

        for(int i = 0; i < n; i++) {
            long long rightSum = totalSum - leftSum - nums[i];

            if(leftSum == rightSum) {
                return i;
            }

            leftSum += nums[i];
        }

        return -1;
    }
};