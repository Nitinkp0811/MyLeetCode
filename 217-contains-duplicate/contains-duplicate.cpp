class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();

        unordered_set<int> seen;

        for(int val : nums) {
            if(seen.count(val)) {
                return true;
            } else {
                seen.insert(val);
            }
        }

        return false;
    }
};