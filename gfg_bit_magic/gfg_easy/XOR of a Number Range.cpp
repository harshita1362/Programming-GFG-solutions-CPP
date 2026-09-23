/*
XOR of a Number Range
Given two integers l and r, find the XOR of elements of the range [l, r].
*/
class Solution {
	public:
	int findXOR(int l, int r) {
		auto xo = [](int n) {
			if (n % 4 == 0)
				return n;
			if (n % 4 == 1)
				return 1;
			if (n % 4 == 2)
				return n + 1;
			return 0;
		};
		return xo(l - 1) ^ xo(r);
	}
};

/* Lamda Function (C++)
auto xo → creates a variable named xo. auto lets C++ automatically determine its type.
= → assigns the lambda function to xo.
[] → capture list. It tells the lambda which outside variables it can use. Here it is empty because we don't need any outside variables.
(int n) → function parameter. The function takes one integer n.
{ ... } → function body.
; → ends the declaration/assignment.
*/
