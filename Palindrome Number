class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
        int rev = 0;
        while (x != 0) {
            int l = x % 10;
            x = x / 10;
            if ((rev > (INT_MAX / 10) || rev < (INT_MIN / 10))) {
                rev = 0;
            } else {
                rev = rev * 10 + l;
            }
        }
        if (n >= 0 && n - rev == 0) {
            return true;
        } else {
            return false;
        }
    }
};
