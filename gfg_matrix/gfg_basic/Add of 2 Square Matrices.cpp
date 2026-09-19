/*
Add of 2 Square Matrices
Given two square matrices a[][] and b[][] of size n x n, add the corresponding elements of both matrices and store
the result in matrix a[][].
*/
class Solution {
  public:
    void addMat(vector<vector<int>>& a, vector<vector<int>>& b) {
        int n = a.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] += b[i][j];
            }
        }
    }
};
