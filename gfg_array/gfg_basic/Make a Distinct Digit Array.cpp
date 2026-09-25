/*
Make a Distinct Digit Array
Given an array arr[] of positive integers, find all the distinct digits that appear in the elements of the array. Return the digits in sorted order.
*/
class Solution {
	public:
	vector<int> distDigit(vector<int>& arr) {
		bool seen[10] = {};
		for (int x : arr) {
			while (x > 0) {
				seen[x % 10] = true;
				x /= 10;
			}
		}
		vector<int> ans;
		for (int i = 0; i < 10; i++) {
			if (seen[i])
				ans.push_back(i);
		}
		return ans;
	}
};
