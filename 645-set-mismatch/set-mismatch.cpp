class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int numsSum = 0;
        int duplicateNum = -1;
        int sum;
        int missingNum;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < n; i++) {
            numsSum += nums[i];

            if(i > 0 && nums[i] == nums[i - 1]) {
                duplicateNum = nums[i];
            }
        }
        sum = (n * (n + 1)) / 2;

        missingNum = sum - numsSum + duplicateNum;
        return {duplicateNum, missingNum};
    }
};