/*
Count Sorted Rows
Given a matrix mat[][] of size n × m, count the number of rows that are sorted either in 
strictly increasing order or strictly decreasing order.
*/
class Solution {
	public:
	int sortedCount(vector<vector<int>> &mat) {
		int n = mat.size();
		int m = mat[0].size();
		int ans = 0;
		for (int i = 0; i < n; i++) {
			bool inc = true, dec = true;
			for (int j = 1; j < m; j++) {
				if (mat[i][j] <= mat[i][j - 1])
					inc = false;
				if (mat[i][j] >= mat[i][j - 1])
					dec = false;
			}
			if (inc || dec)
				ans++;
		}
		return ans;
	}
};
