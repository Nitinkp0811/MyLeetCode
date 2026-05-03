class Solution {
public:
    bool validDigit(int n, int x) {
        string numStr = to_string(n);

        int firstDigit = numStr[0] - '0';

        if(firstDigit == x) return false;
        
        int temp = n;

        while(temp >= 10) {
            int digit = temp % 10;

            if(digit == x) return true;

            temp /= 10;
        }

        return false;
    }
};