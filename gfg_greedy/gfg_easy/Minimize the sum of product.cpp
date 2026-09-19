/*
Minimize the sum of product
Given two arrays a[] and b[] of size n containing positive integers, rearrange the elements of both arrays such that:
a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1] becomes minimum.
Each element of a[] and b[] must be used exactly once.
*/

class Solution {
	public:
	int minProductSum(vector<int> &a, vector<int> &b) {
		// Sort one array in ascending order
		sort(a.begin(), a.end());
		// Sort the other array in descending order
		sort(b.begin(), b.end(), greater<int>());
		int sum = 0;
		// Calculate the minimum product sum
		for (int i = 0; i < a.size(); i++) {
			sum += a[i] * b[i];
		}
		return sum;
	}
};
