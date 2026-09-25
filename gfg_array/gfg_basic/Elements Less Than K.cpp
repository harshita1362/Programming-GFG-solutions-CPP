/*
Elements Less Than K
Given an array arr[] and an integer k, return all elements of arr that are less than k. 
The elements in the returned vector should appear in the same order as in the original array. 
Note: If no element is less than k, return an empty vector.
*/

class Solution {
	public:
	vector<int> elementsLessThanK(vector<int>& arr, int k) {
		vector<int> ans;
		for (int x : arr) {
			if (x < k)
				ans.push_back(x);
		}
		return ans;
	}
};
