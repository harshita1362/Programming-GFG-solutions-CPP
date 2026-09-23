/*
Rotate a Matrix by 180 Counterclockwise
Given a 2D square matrix mat[][] of size n x n, rotate it by 180 degrees without using extra space.
Note: You must rotate the matrix in place and modify the input matrix directly.
*/

class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n / 2; j++) {
                swap(mat[i][j], mat[i][n - j - 1]);
            }
        }
        for (int i = 0; i < n / 2; i++) {
            swap(mat[i], mat[n - i - 1]);
        }
    }
};
/* Approach: Reverse each row, then reverse the order of rows. */
