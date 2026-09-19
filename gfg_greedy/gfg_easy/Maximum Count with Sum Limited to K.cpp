/*
Maximum Count with Sum Limited to K
Given an array arr[] consisting of the cost of n toys and an integer k denoting the amount of money you have.
Find the maximum number of toys that you can buy with amount k.
*/

class Solution {
	public:
	int toyCount(vector<int>& arr, int k) {
		// Sort the toy costs in ascending order
		sort(arr.begin(), arr.end());
		int count = 0;
		// Buy the cheapest toys first
		for (int i = 0; i < arr.size(); i++) {
			// If we can afford this toy, buy it
			if (arr[i] <= k) {
				k -= arr[i];
				count++;
			}
			else {
				// Remaining toys are more expensive
				break;
			}
		}
		return count;
	}
};
