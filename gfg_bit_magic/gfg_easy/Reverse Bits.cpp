/*
Reverse Bits
Reverse the bits of a given non-negative integer n and return the number obtained after reversal.
No leading zeros are to be considered during reversal
*/
class Solution {
	public:
	int reverseBits(int n) {
		int ans = 0;
		while (n > 0) {
			ans = (ans << 1) | (n & 1);
			n >>= 1;
		}
		return ans;
	}
};
/*
n & 1 gets the last bit of n.
ans << 1 shifts ans left to make space for that bit.
n >>= 1 removes the last bit from n.
Repeat until n becomes 0.
*/
