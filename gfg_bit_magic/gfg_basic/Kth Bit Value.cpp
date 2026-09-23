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
