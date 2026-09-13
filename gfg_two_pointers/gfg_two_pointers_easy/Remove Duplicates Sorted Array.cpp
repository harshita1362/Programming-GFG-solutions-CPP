/*
Remove Duplicates Sorted Array
You are given a sorted array arr[] containing positive integers. 
Your task is to remove all duplicate elements from this array such that each element appears only once. 
Return an array containing these distinct elements in the same order as they appeared.
*/
class Solution {
	public:
	vector<int> removeDuplicates(vector<int> &arr) {
		int j = 0;
		for (int i = 1; i < arr.size(); i++) {
			if (arr[i] != arr[j]) {
				j++;
				arr[j] = arr[i];
			}
		}
		arr.resize(j + 1);
		return arr;
	}
};
