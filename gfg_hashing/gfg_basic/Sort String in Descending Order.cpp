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

class Solution {
	public:
	string reverseSort(string &s) {
		int freq[26] = {0};
		for (char c : s)
			freq[c - 'a']++;
		int k = 0;
		for (int i = 25; i >= 0; i--) {
			while (freq[i]--)
				s[k++] = 'a' + i;
		}
		return s;
	}
};
