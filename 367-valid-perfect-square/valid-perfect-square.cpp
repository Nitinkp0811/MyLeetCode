class Solution {
public:
    bool isPerfectSquare(int num) {
        long long n = 1;
        while(n < num) {
            if(n * n == num) {
                return true;
            }
            else if(n * n < num) {
                n++;
            } else {
                return false;
            }
        }

        return true;
    }
};