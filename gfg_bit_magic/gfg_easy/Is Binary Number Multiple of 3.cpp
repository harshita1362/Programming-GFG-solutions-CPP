/*
Is Binary Number Multiple of 3
You are given a binary number as a string of characters ('0' and '1'). Your task is to determine whether this binary 
number is divisible by 3. 
Note: Try to accomplish this using a single traversal of the input binary string.
*/
class Solution {
	public:
	bool isMultipleOf3(string& s) {
		int rem = 0;
		for (char c : s)
			rem = (rem * 2 + (c - '0')) % 3;
		return rem == 0;
	}
};
/*
Keep only the remainder modulo 3, so the huge binary number never needs to be converted to decimal.
For each bit: rem = (rem * 2 + bit) % 3.
*/
