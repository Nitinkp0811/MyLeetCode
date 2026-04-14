class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map;
        vector<int> ans;

        for(int x : nums1) {
            map[x]++;
        }

        for(int x : nums2) {
            if(map[x] > 0) {
                ans.push_back(x);
                map[x]--;
            }
        }

        return ans;
    }
};