/*
Squares in Matrix
Given a mxn matrix, count the number of squares in the matrix.
*/

class Solution {
public:
    int squaresInMatrix(int m, int n) {
        int ans = 0;
        for (int k = 1; k <= min(m, n); k++) {
            ans += (m - k + 1) * (n - k + 1);
        }
        return ans;
    }
};
