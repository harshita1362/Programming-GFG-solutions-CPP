/*
Rotate by 90 degree
Given a square matrix mat[][] of size n x n. The task is to rotate it by 90 degrees in an anti-clockwise direction
without using any extra space. 
*/

class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        for(int i = 0; i < n; i++)
            for(int j = i + 1; j < n; j++)
                swap(mat[i][j], mat[j][i]);
        reverse(mat.begin(), mat.end());
    }
};
