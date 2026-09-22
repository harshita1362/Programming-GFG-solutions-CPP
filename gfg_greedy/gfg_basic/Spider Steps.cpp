/*
Spider Steps
Given three integers h, u, and d, representing the height of a well, the distance a spider climbs in each step, 
and the distance it slips after each step, respectively.
In every step, the spider first climbs u units.
If the spider reaches or exceeds the top of the well after climbing, it escapes immediately and does not slip back.
Otherwise, it slips down by d units.
Return the minimum number of steps required for the spider to escape. 
If it is impossible for the spider to escape, return -1.
*/
class Solution {
	public:
	int minStep(int h, int u, int d) {
		if (u >= h)
			return 1;
		return (h - u + (u - d) - 1) / (u - d) + 1;
	}
};
