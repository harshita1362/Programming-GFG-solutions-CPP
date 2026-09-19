/*
Sum of Matrix
Given a non-null integer matrix mat[][] of size n × m, compute the sum of all its elements.
*/
class Solution {
	public:
	int sumOfMatrix(vector<vector<int>> & mat) {
		int sum = 0;
		for (int i = 0; i < mat.size(); i++) {
			for (int j = 0; j < mat[0].size(); j++) {
				sum += mat[i][j];
			}
		}
		return sum;
	}
};
