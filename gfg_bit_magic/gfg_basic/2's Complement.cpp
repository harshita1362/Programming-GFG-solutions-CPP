/*
2's Complement
Given a binary string s, find its 2's complement and return the result as a binary string of the same length.
The 2's complement of a binary number is obtained by first flipping all its bits (0 to 1 and 1 to 0) and 
then adding 1 to the resulting binary number.
*/

class Solution {
	public:
	string twosComplement(string s) {
		int n = s.size();
		// Flip all bits
		for (char &c : s)
			c = (c == '0') ? '1' : '0';
		// Add 1
		for (int i = n - 1; i >= 0; i--) {
			if (s[i] == '0') {
				s[i] = '1';
				return s;
			}
			s[i] = '0';
		}
		return s;
	}
};
