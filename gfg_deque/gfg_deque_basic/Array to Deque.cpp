/*
Array to Deque
Given an array arr[] containing non-negative integers. 
You need to insert all elements of the array to deque and return it.
*/

class Solution {
	public:
	deque<int> dqInsertion(vector<int>& arr) {
		deque<int> dq;
		for (int x : arr)
			dq.push_back(x);
		return dq;
	}
};
