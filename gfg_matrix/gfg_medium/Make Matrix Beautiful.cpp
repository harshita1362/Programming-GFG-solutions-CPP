/*
Make Matrix Beautiful
Given a square matrix mat[][] of size n x n, return the minimum operations required to make the matrix beautiful. 
A beautiful matrix is defined as a square matrix in which the sum of elements in every row and every column is equal. 
In one operation, you are allowed to increment the value of any single cell by 1.
*/

class Solution {
	public:
	int balanceSums(vector<vector<int>> &mat) {
		int n = mat.size();
		int mx = 0, sum = 0;
		for (int i = 0; i < n; i++) {
			int row = 0, col = 0;
			for (int j = 0; j < n; j++) {
				row += mat[i][j];
				col += mat[j][i];
				sum += mat[i][j];
			}
			mx = max(mx, row);
			mx = max(mx, col);
		}
		return n * mx - sum;
	}
};
/*
Approach: Find the maximum row/column sum mx. Every row and column must reach this sum.
Minimum operations = n × mx - total matrix sum.
  */
