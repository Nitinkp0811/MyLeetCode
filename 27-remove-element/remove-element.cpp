class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int j = 0; j < nums.size(); j++) {
            if(nums[j] == val) {
                nums.erase(nums.begin() + j);
                j--;
            }
        }

        return nums.size();
    }
};