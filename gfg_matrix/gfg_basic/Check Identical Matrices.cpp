/*
Check Identical Matrices
Given two square matrices mat1[][] and mat2[][] of size n × n, determine whether the matrices are identical or not.
*/
class Solution {
	public:
	bool identicalMat(vector<vector<int>> &mat1, vector<vector<int>> &mat2) {
		int n = mat1.size();
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (mat1[i][j] != mat2[i][j])
					return false;
			}
		}
		return true;
	}
};
