/*
Sort String in Descending Order
Given a string s containing only lowercase alphabets, the task is to sort it in lexicographically-descending order.
Note : A string is in lexicographically descending order if characters are arranged from larger to smaller based on dictionary order (i.e., 'z' comes before 'a').
*/

class Solution {
	public:
	string reverseSort(string &s) {
		sort(s.begin(), s.end(), greater<char>());
		return s;
	}
};
