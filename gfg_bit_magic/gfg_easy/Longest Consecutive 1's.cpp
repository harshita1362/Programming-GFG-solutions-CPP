/*
Longest Consecutive 1's
Given a number n. Find the length of the longest consecutive 1s in its binary representation.
*/
class Solution {
	public:
	int maxConsecutiveOnes(int n) {
		int count = 0, ans = 0;
		while (n > 0) {
			if (n & 1) {
				count++;
				ans = max(ans, count);
			}
			else {
				count = 0;
			}
			n> >= 1;
		}
		return ans;
	}
};
