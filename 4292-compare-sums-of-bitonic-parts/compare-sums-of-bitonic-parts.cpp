class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int peakIndex = 0;

        while(start < end) {
            int mid  = start + (end - start) / 2;

            if(nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) {
                peakIndex = mid;
                break;
            }
            else if(nums[mid] > nums[mid - 1] && nums[mid] < nums[mid + 1]) {
                start = mid;
            }
            else if(nums[mid] > nums[mid + 1] && nums[mid] < nums[mid - 1]) {
                end = mid;
            }
        }

        long long leftSum = 0;
        for(int i = peakIndex; i >= 0; i--) {
            leftSum += nums[i];
        }

        long long rightSum = 0;
        for(int i = peakIndex; i < nums.size(); i++) {
            rightSum += nums[i];
        }

        if(leftSum > rightSum) return 0;
        if(leftSum < rightSum) return 1;

        return -1;
    }
};