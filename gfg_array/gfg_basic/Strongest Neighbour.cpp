/*
Strongest Neighbour
You are given an array arr[] consisting of positive integers. Return the maximum of all adjacent pairs in the array
*/
class Solution {
	public:
	vector<int> maxAdj(vector<int>& arr) {
		vector<int> ans;
		for (int i = 0; i < arr.size() - 1; i++)
			ans.push_back(max(arr[i], arr[i + 1]));
		return ans;
	}
};
