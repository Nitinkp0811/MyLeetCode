class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> ans;

         int mid = (0 + (n - 0) / 2);

        for(int i = 0; i < k; i++) {
            ans.push_back(nums[i]);
            ans.push_back(nums[mid]);
            mid++;
        }

        return ans;
    }
};