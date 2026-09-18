/*
Perimeter of Shapes in Binary Matrix
Given a binary matrix mat[][] of size n × m, where each cell contains either 0 or 1, find the total perimeter of all figures formed by cells 
containing 1s. Two cells are considered adjacent if they share a common side.
A single cell containing 1 has a perimeter of 4, whereas two adjacent cells containing 1 (i.e., 11) together have a perimeter of 6.
*/

class Solution {
	public:
	int findPerimeter(vector<vector<int>> & mat) {
		int n = mat.size();
		int m = mat[0].size();
		int ans = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (mat[i][j] == 1) {
					ans += 4;
					// Shared side with cell below
					if (i + 1 < n && mat[i + 1][j] == 1)
						ans -= 2;
					// Shared side with cell to the right
					if (j + 1 < m && mat[i][j + 1] == 1)
						ans -= 2;
				}
			}
		}
		return ans;
	}
};
