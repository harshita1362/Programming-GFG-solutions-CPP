/*
Quadratic Equation Roots
Given a quadratic equation ax2 + bx + c = 0, find its roots. If the equation has real roots,
then return floor value of each root in decreasing order, If the roots are imaginary return -1, 
the driver code will print Imaginary.
*/
class Solution {
	public:
	vector<int> quadraticRoots(int a, int b, int c) {
		int d = b*b - 4*a*c;
		if (d < 0)
			return {-1};
		int r1 = floor((-b + sqrt(d)) / (2.0*a));
		int r2 = floor((-b - sqrt(d)) / (2.0*a));
		if (r1 < r2)
			swap(r1, r2);
		return {r1, r2};
	}
};
