/*
Kth Bit Value
Given two integers n and k, determine the value of the kth Least Significant Bit (LSB) in the binary representation of n.
The Least Significant Bit (LSB) is the rightmost bit and is considered the 1st bit from the right.
*/
class Solution {
	public:
	int kthLSB(int n, int k) {
		return (n>> (k - 1)) & 1;
	}
};
/*
n >> (k - 1) shifts the bits of n right by k-1 positions, bringing the kth bit to the rightmost position.
& 1 extracts that rightmost bit, giving either 0 or 1.
*/
