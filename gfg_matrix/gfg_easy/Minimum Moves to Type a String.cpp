/*
Minimum Moves to Type a String
Given a screen containing alphabets from a-z, we can go from one character to another character using a remote.
- The initial position is top left and all characters of input string should be printed in order.
- Find the total number of minimum moves in such a path(Move UP, DOWN, LEFT, RIGHT).
- Pressing OK also accounts for one move.
*/
class Solution {
	public:
	int minMoves(string &s) {
		int ans = 0;
		int cur = 0; // position of current character
		for (char c : s) {
			int next = c - 'a';
			int r1 = cur / 5, c1 = cur % 5;
			int r2 = next / 5, c2 = next % 5;
			ans += abs(r1 - r2) + abs(c1 - c2);
			ans++; // press OK
			cur = next;
		}
		return ans;
	}
};
