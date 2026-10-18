/*
The Lazy Caterer's Problem
Given an integer n, denoting the number of cuts that can be made on a pancake, find the maximum number of pieces that can be formed by making n cuts.
Note: Cuts can't be horizontal.
*/
class Solution {
  public:
    int maxCuts(int n) {
        return (n * (n + 1)) / 2 + 1;
    }
};
