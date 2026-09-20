/*
Sums of i-th row and i-th column
Given a 2D integer array mat[][] of size n × m, check whether for every index i, the sum of the ith row is equal to the sum of the ith column. 
Return true if the condition holds for all valid indices, otherwise return false.
Note: If the matrix is not square (n != m), only compare indices up to min(n, m). 
For example, if there are 3 rows and 1 column, only compare the 1st row with the 1st column.
*/
class Solution {
	public:
	bool sumOfRowCol(vector<vector<int>> &mat) {
		int n = mat.size();
		int m = mat[0].size();
		int k = min(n, m);
		for (int i = 0; i < k; i++) {
			int rowSum = 0, colSum = 0;
			for (int j = 0; j < m; j++)
				rowSum += mat[i][j];
			for (int j = 0; j < n; j++)
				colSum += mat[j][i];
			if (rowSum != colSum)
				return false;
		}
		return true;
	}
};
