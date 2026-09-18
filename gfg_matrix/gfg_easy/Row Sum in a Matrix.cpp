/*
Row Sum in a Matrix
Given a 2-D integer matrix mat[][] of size n*m. 
Return a list of integers where list[i] represents the sum of elements of the ith row of the matrix.
Note: The sum of any row will remain within the range of an integer
*/
class Solution {
	public:
	vector<int> rowSum(vector<vector<int>> & mat) {
		vector<int> ans;
		for (int i = 0; i < mat.size(); i++) {
			int sum = 0;
			for (int j = 0; j < mat[i].size(); j++) {
				sum += mat[i][j];
			}
			ans.push_back(sum);
		}
		return ans;
	}
};
