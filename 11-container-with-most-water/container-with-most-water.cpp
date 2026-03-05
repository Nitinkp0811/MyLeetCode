class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int start = 0;
        int end = n - 1;
        int mainAns = 0;
        int area = 0;

        while(start < end) {
            int wt = end - start;
            int mini = min(height[start], height[end]);
            area = wt * mini;
            mainAns = max(area, mainAns);

            if(height[start] < height[end]) {
                start++;
            } else{
                end--;
            }
        }
        return mainAns;
    }
};