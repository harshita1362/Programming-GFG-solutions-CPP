/*
Transpose of Matrix
Given a square matrix of size n x n, return the transpose matrix of the given matrix.
The transpose of a matrix is obtained by converting all the rows to columns and all the columns to rows
*/

class Solution {
	public:
	vector<vector<int>> transpose(vector<vector<int>> & mat) {
		int n = mat.size();
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				swap(mat[i][j], mat[j][i]);
			}
		}
		return mat;
	}
};
