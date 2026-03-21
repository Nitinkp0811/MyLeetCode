class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int numsSum = 0;
        int n = nums.size();
        int ans;

        for(int i = 0; i < n; i++) {
            numsSum += nums[i];
        }

        sum = (n * (n + 1)) / 2;

        ans = sum - numsSum;

        return ans;
    }
};