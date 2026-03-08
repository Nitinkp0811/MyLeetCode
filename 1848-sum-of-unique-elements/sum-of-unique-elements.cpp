class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int> freq;

        int sum = 0;

        for(int i = 0; i < n; i++) {
            freq[nums[i]]++;
        }

        for(int i = 0; i < n; i++) {
            if(freq[nums[i]] == 1) {
                sum += nums[i];
            }
        }
        return sum;
    }
};