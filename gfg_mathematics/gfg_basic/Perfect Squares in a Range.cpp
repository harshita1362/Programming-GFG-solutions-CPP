/*
Perfect Squares in a Range
Given two given numbers a and b where 1<=a<=b, 
find the number of perfect squares between a and b (a and b inclusive).
*/
class Solution {
  public:
    int numOfPerfectSquares(int a, int b) {
        int low = sqrt(a);
        int high = sqrt(b);

        if (low * low < a) low++;

        return high - low + 1;
    }
};
