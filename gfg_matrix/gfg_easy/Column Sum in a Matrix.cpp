/*
Column Sum in a Matrix
Given a 2-D integer matrix mat[][] of size n*m. 
Return a list of integers where list[i] represents the sum of elements of the ith column of the matrix.
*/
class Solution {
	public:
	vector<int> colSum(vector<vector<int>> & mat) {
		int n = mat.size();
		int m = mat[0].size();
		vector<int> ans(m, 0);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				ans[j] += mat[i][j];
			}
		}
		return ans;
	}
};
