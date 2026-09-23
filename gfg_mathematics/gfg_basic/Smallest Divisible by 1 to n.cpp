/*
Smallest Divisible by 1 to n
Given a number n, find an integer denoting the smallest number evenly divisible by each number from 1 to n.
*/
class Solution {
	public:
	long long getSmallestDivNum(long long n) {
		long long ans = 1;
		for (long long i = 2; i <= n; i++)
			ans = (ans / gcd(ans, i)) * i;
		return ans;
	}
};
/*
Find the LCM (Least Common Multiple) of all numbers from 1 to n.
Start with ans = 1.
For every i from 2 to n, update: ans = LCM(ans, i)
Use LCM(a,b) = (a / GCD(a,b)) × b to avoid unnecessary overflow.
*/
