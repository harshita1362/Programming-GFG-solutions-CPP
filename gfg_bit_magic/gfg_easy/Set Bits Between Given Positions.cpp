/*
Set Bits Between Given Positions
Given a non-negative integer n and two integers l and r, set all the bits from position l to r (both inclusive) 
in the binary representation of n. Bit positions are numbered starting from 1 for the least significant bit. 
Return the resulting number.
*/
class Solution {
	public:
	int setAllRangeBits(int n, int l, int r) {
		for (int i = l; i <= r; i++)
			n = n | (1 << (i - 1));
		return n;
	}
};
/*
Positions are 1-indexed from the right.
1 << (i - 1) creates a mask with the ith bit set.
Because positions start from 1 at the rightmost bit:
Position 1 → 1 << 0 → 0001, Position 2 → 1 << 1 → 0010, Position 3 → 1 << 2 → 0100, Position 4 → 1 << 3 → 1000
n | mask sets that bit to 1.
Repeat for every position from l to r.
*/
