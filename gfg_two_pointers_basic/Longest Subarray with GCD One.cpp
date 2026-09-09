/*
Longest Subarray with GCD One
Given an integer array arr[]. 
Return the length of the largest subarray having GCD ( Greatest Common divisor) equal to 1.
If no such  subarray exist with GCD 1, return -1.
*/
class Solution {
public:
    int longestSubarray(vector<int> &arr) {
        int g = 0;
        for (int x : arr) {
            g = __gcd(g, x);
        }
        if (g == 1)
            return arr.size();
        return -1;
    }
};