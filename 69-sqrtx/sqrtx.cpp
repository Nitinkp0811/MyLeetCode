class Solution {
public:
    int mySqrt(int x) {
        int start = 0;
        int end = x;

        while(start <= end) {
            int mid = start + (end - start) / 2;

            if((long long)mid * mid == x) {
                return mid;
            }
            else if((long long)mid * mid < x) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        if((long long) start * start > x) {
            start--;
        }

        return start;
    }
};