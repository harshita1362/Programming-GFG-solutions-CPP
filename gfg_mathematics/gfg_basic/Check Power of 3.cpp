/*
Check Power of 3
Given a positive integer n, find if it is a power of 3. A number is said to be a power of 3 if it can be expressed as 3x for some non-negative integer x.
*/

class Solution {
  public:
    bool isPowerOf3(int n) {
        if (n <= 0) return false;
        while (n % 3 == 0) {
            n /= 3;
        }
        return n == 1;
    }
};
