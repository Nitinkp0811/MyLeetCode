class Solution {
public:
    bool isPrime(int num) {
        if(num <= 1) return false;
        if(num <= 3) return true;

        if(num % 2 == 0 || num % 3 == 0) return false;

        for(int i = 5; i * i <= num; i += 6) {
            if(num % i == 0 || num % (i + 2) == 0) return false;
        }

        return true;
    }
    
    int sumOfPrimesInRange(int n) {
        int rev = 0;
        int temp = n;

        while(temp != 0) {
            int digit = temp % 10;
            rev = rev * 10 + digit;
            temp /= 10;
        }

        int start = min(n, rev);
        int end = max(n, rev);

        int sum = 0;

        for(int i = start; i <= end; i++) {
            if(isPrime(i)) {
                sum += i;
            }
        }

        return sum;
    }
};