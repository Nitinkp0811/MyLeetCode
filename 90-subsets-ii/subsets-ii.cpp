class Solution {
public:

    void getAllSubset(vector<int>& nums, vector<int> &ans, int i, vector<vector<int>> &allSubset) {
        sort(nums.begin(), nums.end());

        if(i == nums.size()) {
            allSubset.push_back({ans});
            return;
        }

        //include
        ans.push_back(nums[i]);
        getAllSubset(nums, ans, i + 1, allSubset);

        //exclude
        ans.pop_back();

        int idx = i + 1;
        while(idx < nums.size() && nums[idx] == nums[idx - 1]) {
            idx++;
        }
        getAllSubset(nums, ans, idx, allSubset);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> allSubset;

        getAllSubset(nums, ans, 0, allSubset);
        
        return allSubset;
    }
};