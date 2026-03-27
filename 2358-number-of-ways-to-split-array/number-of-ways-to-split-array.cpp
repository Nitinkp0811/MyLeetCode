class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long sum = 0;

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        
        int count = 0;
        long long prefixSum = 0;
        for(int i = 0; i < nums.size() - 1; i++) {
            prefixSum += nums[i];
            long long suffixSum = sum - prefixSum;

            if(prefixSum >= suffixSum) {
                count++;
            }
        }

        return count;
    }
};