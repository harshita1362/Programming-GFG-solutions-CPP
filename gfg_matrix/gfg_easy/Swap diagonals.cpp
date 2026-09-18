/*
Swap diagonals
Given a square matrix mat[][], the task is to swap the elements of the major and minor diagonals.
Major Diagonal: Elements that lie from the top-left corner to the bottom-right corner of the matrix 
(i.e., where row index equals column index).
Minor Diagonal: Elements that lie from the top-right corner to the bottom-left corner 
(i.e., where the sum of row and column indices equals n - 1).
*/
class Solution {
	public:
	void swapDiagonal(vector<vector<int>> & mat) {
		int n = mat.size();
		for (int i = 0; i < n; i++) {
			swap(mat[i][i], mat[i][n - 1 - i]);
		}
	}
};
