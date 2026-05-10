class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> nums2 = nums;

        reverse(nums2.begin(), nums2.end());

        vector<int> nums3;

        for(int x : nums) {
            nums3.push_back(x);
        }

        for(int x : nums2) {
            nums3.push_back(x);
        }

        return nums3;
    }
};