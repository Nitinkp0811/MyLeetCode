class Solution {
public:
    bool isPalindrome(int x) {
        int revX = 0;
        int xCopy = x;

        if(x < 0) {
            return false;
        }

        while(x != 0) {
            int digit = x % 10;

            if(revX < INT_MIN / 10 || revX > INT_MAX / 10) {
                return false;
            }

            revX = (revX * 10) + digit;

            x = x / 10;
        }

        if(xCopy == revX) {
            return true;
        } else {
            return false;
        }
    }
};