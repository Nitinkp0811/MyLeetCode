class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        int ans = 0;
        ans = nums[0];
        return ans;
    }
};