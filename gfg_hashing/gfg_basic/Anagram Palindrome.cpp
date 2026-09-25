/*
Anagram Palindrome
Given a string s, determine whether its characters can be rearranged to form a palindrome. 
Return true if it is possible to rearrange the string into a palindrome; otherwise, return false.
*/
class Solution {
	public:
	bool canFormPalindrome(string &s) {
		int freq[26] = {};
		for (char c : s)
			freq[c - 'a']++;
		int odd = 0;
		for (int i = 0; i < 26; i++) {
			if (freq[i] % 2)
				odd++;
		}
		return odd <= 1;
	}
};
