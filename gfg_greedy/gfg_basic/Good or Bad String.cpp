/*
Good or Bad String
Given a string s composed of lowercase alphabets and the wildcard character '?', where '?' can be replaced by any lowercase alphabet, 
classify the string as "BAD" if it is possible to replace every '?' with some lowercase letter such that 
the resulting string contains more than 3 consonants together or more than 5 vowels together. Otherwise, the string is classified as "GOOD".
Return true if the string is GOOD, and false if the string is BAD.
*/

class Solution {
	public:
	bool isGoodOrBad(string &s) {
		int v = 0, c = 0;
		for (char ch : s) {
			if (ch == '?') {
				v++;
				c++;
			}
			else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
				v++;
				c = 0;
			}
			else {
				c++;
				v = 0;
			}
			if (v > 5 || c > 3)
				return false;
		}
		return true;
	}
};
