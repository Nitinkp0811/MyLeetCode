class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int evenCount = 0;

        for(int i = 0; i < n; i++) {
            int no = 0;
            int num = nums[i];

            while(num > 0) {
                num /= 10;
                no++;
            }

            if(no % 2 == 0) {
                evenCount++;
            }
        }

        return evenCount;
    }
};