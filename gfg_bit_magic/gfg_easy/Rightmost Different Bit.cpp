/*
Rightmost Different Bit
Given two integers m and n , return the position (1-based from the right) of the rightmost bit where they differ in binary,
or -1 if both are identical.
*/
class Solution {
	public:
	int posOfRightMostDiffBit(int m, int n) {
		int x = m ^ n;
		if (x == 0)
			return - 1;
		return __builtin_ctz(x) + 1;
	}
};
/*
m ^ n gives 1 wherever the bits differ.
__builtin_ctz(x) finds the position of the rightmost set bit (0-based).
Add 1 because the question uses 1-based position.
*/
