/*
Distinct-Digit Numbers in Range
Given two positive integers l and r, find all numbers in the range [l, r] whose digits are all distinct, 
with no digit repeated. return them in ascending order.
*/

class solution {
	public:
	vector<int> uniqueNumbers(int l, int r) {
		vector<int> ans;
		for (int n = l; n <= r; n++) {
			int x = n;
			bool seen[10] = {};
			bool ok = true;
			while (x > 0) {
				int d = x % 10;
				if (seen[d]) {
					ok = false;
					break;
				}
				seen[d] = true;
				x /= 10;
			}
			if (ok)
				ans.push_back(n);
		}
		return ans;
	}
};
