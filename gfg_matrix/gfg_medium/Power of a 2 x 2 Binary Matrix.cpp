/*
Power of a 2 x 2 Binary Matrix
Given a 2 × 2 matrix: A = [[1, 1], [1, 0]] and an integer n. Compute the matrix An.
Return the value of the element at position A[1][0] (i.e., second row, first column) modulo 109 + 7.
*/

class Solution {
	public:
	int firstElement(int n) {
		const int MOD = 1e9 + 7;
		long long a = 0, b = 1;
		for (int i = 0; i < n; i++) {
			long long c = (a + b) % MOD;
			a = b;
			b = c;
		}
		return a;
	}
};


/*
Approach:
The matrix
[[1,1],[1,0]]^n
has F(n) at position [1][0]. So calculate the nth Fibonacci number iteratively.
*/
