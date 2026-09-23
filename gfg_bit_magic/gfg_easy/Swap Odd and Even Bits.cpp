/*
Swap Odd and Even Bits
Given an unsigned integer n, You have  to swap all even-position bits with their rightside adjacent odd-position bits.
*/

class Solution {
	public:
	unsigned int swapBits(unsigned int n) {
		unsigned int even = n & 0xAAAAAAAA;
		unsigned int odd = n & 0x55555555;
		even >>= 1;
		odd <<= 1;
		return even | odd;
	}
};
/*
0xAAAAAAAA → selects even-position bits.
0x55555555 → selects odd-position bits.
Shift even bits right and odd bits left → swaps each adjacent pair.
| combines them.
*/
