/*
Adjacent Set Bits Check
Given an integer n, find if its binary representation contains at least one pair of adjacent set bits.
*/
class Solution {
	public:
	bool adjacentBits(int n) {
		return (n & (n>> 1)) != 0;
	}
};
