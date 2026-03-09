class Solution {
public:

    int firstPosition(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        int ans = -1;

        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(nums[mid] == target) {
                ans = mid;
                end = mid - 1;
            }
            else if(target < nums[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return ans;
    }

    int lastPosition(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        
        int ans = -1;

        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(target == nums[mid]) {
                ans = mid;
                start = mid + 1;
            }
            else if(target < nums[mid]) {
                end = mid - 1;
            } else {
                start = mid +1;
            }
        }

        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;

        ans.push_back(firstPosition(nums, target));
        ans.push_back(lastPosition(nums, target));

        return ans;
    }
};