/*
Check Binary Divisible by 10
Given a binary string s, return true if its decimal representation is divisible by 10, otherwise return false.
*/
class Solution {
	public:
	bool isDivisible(string& s) {
		int rem = 0;
		for (char c : s)
			rem = (rem * 2 + (c - '0')) % 10;
		return rem == 0;
	}
};
/*
Process the binary string bit by bit while keeping only the remainder modulo 10.
rem = (rem * 2 + bit) % 10 updates the remainder.
At the end, rem == 0 means the binary number is divisible by 10.
*/
