/*
Addition Under Modulo
Given three integers a, b, and M, compute the result of the modular addition operation: (a+b) mod M
Note: Modular operations returns the remainder when divided by M. The result will always lie in the range 0 and M - 1.
*/
class Solution {
  public:
    int sumUnderModulo(int a, int b, int M) {
        return (a + b) % M;
    }
};
