class Solution {
public:
    set<vector<int>> s;

    void getAllCombinations(vector<int>& candidates, int target, vector<int> &combination, vector<vector<int>> &ans, int idx) {
        if(idx == candidates.size() || target < 0) {
            return;
        }

        if(target == 0) {
            if(s.find(combination) == s.end()) {
                ans.push_back({combination});
                s.insert(combination);
            }
            return;
        }

        combination.push_back(candidates[idx]);
        //Single inclusion
        getAllCombinations(candidates, target - candidates[idx], combination, ans, idx + 1);

        //Multiple inclusion
        getAllCombinations(candidates, target - candidates[idx], combination, ans, idx);

        combination.pop_back();

        //No inclusion
        getAllCombinations(candidates, target, combination, ans, idx + 1);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> combination;
        vector<vector<int>> ans;

        getAllCombinations(candidates, target, combination, ans, 0);

        return ans;
    }
};