/*
Diagonal Sum in Matrix
Given a square matrix of size n×n. Your task is to calculate the sum of its diagonals.
Note :  When n is odd, there is center value which is counted twice in the diagonal sum.
*/
class Solution {
	public:
	int diagonalSum(vector<vector<int>> & mat) {
		int n = mat.size();
		int sum = 0;
		for (int i = 0; i < n; i++) {
			sum += mat[i][i]; // Main diagonal
			sum += mat[i][n - 1 - i]; // Secondary diagonal
		}
		return sum;
	}
};
