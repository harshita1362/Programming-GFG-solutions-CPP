/*
Sorted Distinct Along With Frequencies
You are given an integer array arr[]. You need to return the distinct elements of array in increasing order 
along with their frequencies
*/

class Solution {
	public:
	vector<vector<int>> freqSorted(vector<int>& arr) {
		map<int, int> freq;
		// Count frequency of each element
		for (int x : arr)
			freq[x]++;
		vector<vector<int>> ans;
		// map keeps elements sorted
		for (auto it : freq) {
			ans.push_back({it.first, it.second});
		}
		return ans;
	}
};
