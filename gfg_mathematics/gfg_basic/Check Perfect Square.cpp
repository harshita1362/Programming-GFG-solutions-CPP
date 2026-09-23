/*
Check Perfect Square
Given a positive integer n, return true if it is a perfect square, otherwise return false. 
A number is called a perfect square if it can be written in the form a × a, where a is an integer.
*/

class Solution {
  public:
    bool isPerfectSquare(int n) {
        int l = 1, r = n;
        while(l <= r) {
            long long mid = l + (r - l) / 2;
            if(mid * mid == n)
                return true;
            else if(mid * mid < n)
                l = mid + 1;
            else
                r = mid - 1;
        }
        return false;
    }
};
