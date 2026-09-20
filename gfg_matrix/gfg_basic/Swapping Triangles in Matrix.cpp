/*
  Swapping Triangles in Matrix
  Given a square matrix mat[][] of size n × n, swap every element above the primary diagonal 
  with its corresponding element below the primary diagonal. 
  The elements on the primary diagonal remain unchanged.
*/
class Solution {
	public:
	void swapTriangle(vector<vector<int>> & mat) {
		int n = mat.size();
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				swap(mat[i][j], mat[j][i]);
			}
		}
	}
};
