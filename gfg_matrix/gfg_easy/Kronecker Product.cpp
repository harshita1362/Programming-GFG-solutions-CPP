/*
Kronecker Product
Given an n×m matrix a[][] and a p×q matrix b[][], their Kronecker product c = a tensor b (also called the matrix direct product) is an (n*p)×(m*q) matrix, 
where each element a[i][j] of the first matrix is replaced by the entire matrix b[][] scaled by a[i][j], placed at the corresponding block position.
In the following image, in the matrix C[][], the first 6 cells of the top left submatrix of size 3 x 2 are a11 multiplied by every entry of B[][]. 
The next 6 cells are a12 multiplied by every entry of B[][] and so on.
*/
class Solution {
	public:
	vector<vector<int>> kroneckerProduct(vector<vector<int>> a,
	vector<vector<int>> b) {
		int n = a.size(), m = a[0].size();
		int p = b.size(), q = b[0].size();
		vector<vector<int>> ans(n * p, vector<int>(m * q));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				for (int x = 0; x < p; x++) {
					for (int y = 0; y < q; y++) {
						ans[i * p + x][j * q + y] = a[i][j] * b[x][y];
					}
				}
			}
		}
		return ans;
	}
};
