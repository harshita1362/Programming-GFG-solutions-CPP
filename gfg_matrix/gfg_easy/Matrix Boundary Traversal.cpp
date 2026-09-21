/*
Matrix Boundary Traversal
You are given a matrix mat[][] . Return the boundary traversal on the matrix in a clockwise manner 
starting from the first row of the matrix.
*/

class Solution {
	public:
	vector<int> boundaryTraversal(vector<vector<int>> & mat) {
		int n = mat.size(), m = mat[0].size();
		vector<int> ans;
		for (int j = 0; j < m; j++)
			ans.push_back(mat[0][j]);
		for (int i = 1; i < n; i++)
			ans.push_back(mat[i][m - 1]);
		if (n > 1)
			for (int j = m - 2; j >= 0; j--)
				ans.push_back(mat[n - 1][j]);
		if (m > 1)
			for (int i = n - 2; i >= 1; i--)
				ans.push_back(mat[i][0]);
		return ans;
	}
};
