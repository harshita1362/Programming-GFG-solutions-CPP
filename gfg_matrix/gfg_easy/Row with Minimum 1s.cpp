/*
Row with Minimum 1s
Given a 2D binary matrix(1-based indexed) mat of dimensions n x m , find the row that contains the minimum number of 1's. 
If two or more rows contain the minimum number of 1's, the answer is the lowest of those indices.
*/

class Solution {
	public:
	int minRow(vector<vector<int>> &mat) {
		int ans = 0, mn = INT_MAX;
		for (int i = 0; i < mat.size(); i++) {
			int cnt = 0;
			for (int j = 0; j < mat[i].size(); j++)
				cnt += mat[i][j];
			if (cnt < mn) {
				mn = cnt;
				ans = i;
			}
		}
		return ans + 1;
	}
};
