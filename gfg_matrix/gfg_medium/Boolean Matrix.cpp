/*
Boolean Matrix
Given a boolean matrix mat[], where each cell contains either 0 or 1, modify it such that if a matrix cell matrix[i][j] is 1
then all the cells in its ith row and jth column will become 1.
*/

class Solution {
  public:
    void booleanMatrix(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vector<int> row(n), col(m);
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                if(mat[i][j] == 1)
                    row[i] = col[j] = 1;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                if(row[i] || col[j])
                    mat[i][j] = 1;
    }
};
