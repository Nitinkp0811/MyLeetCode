class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;

        int right = 0;
        int left = 0;
        int maxLength = 0;

        while(right < s.size()) {
            if(st.find(s[right]) == st.end()) {
                st.insert(s[right]);
                maxLength = max(maxLength, right - left + 1);
                right++;
            } else {
                st.erase(s[left]);
                left++;
            }
        }

        return maxLength;
    }
};