/*
Add Two Fractions
Given four integers num1, den1, num2, and den2, representing two fractions num1/den1 and num2/den2, 
find their sum and return the resulting fraction in its simplified form.
Return the answer as an array of two integers:
The first element represents the numerator.
The second element represents the denominator.
Note: The driver will print the result in the format num/den.
*/
class Solution {
  public:
    vector<int> addFraction(int num1, int den1, int num2, int den2) {
        int num = num1 * den2 + num2 * den1;
        int den = den1 * den2;
        
        int g = gcd(num, den);
        return {num / g, den / g};
    }
};
