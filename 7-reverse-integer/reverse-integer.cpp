class Solution {
public:
    int reverse(int x) {
        int revX = 0;

        while(x != 0) {
            int digit = 0;

            digit = x % 10;

            if(revX > INT_MAX / 10 || revX < INT_MIN / 10) {
                return 0;
            }
            
            revX = (revX * 10) + digit;

            x = x / 10;
        }

        return revX;
    }
};