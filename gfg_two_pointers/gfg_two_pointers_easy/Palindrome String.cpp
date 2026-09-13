/*
Palindrome String
Given a string s, find if it is a palindrome. 
A string is considered a palindrome if it reads the same forwards and backwards.
*/
class Solution {
	public:
	bool isPalindrome(string& s) {
		int i = 0;
		int j = s.size() - 1;
		while (i < j) {
			if (s[i] != s[j])
				return false;
			i++;
			j--;
		}
		return true;
	}
};
