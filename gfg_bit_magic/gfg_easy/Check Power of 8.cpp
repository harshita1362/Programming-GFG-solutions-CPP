/*
Check Power of 8
Given a positive integer n, check whether it can be represented as a power of 8.
*/

class Solution {
	public:
	bool isPowerOfEight(int n) {
		if (n <= 0)
			return false;
		while (n % 8 == 0)
			n /= 8;
		return n == 1;
	}
};

/*
Keep dividing n by 8.
If it eventually becomes 1, then it was a power of 8.
Otherwise, it isn't.
*/
