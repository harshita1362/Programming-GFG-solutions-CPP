/*
Doubling the value
Given an array arr and an integer b, traverse the array (from the beginning) 
and if the element in array is b, double b and continue traversal. 
Find the value of b after the complete traversal.
*/
class Solution {
public:
    int solve(int b, vector<int> &arr) {
        for(int x : arr) {
            if(x == b)
                b *= 2;
        }
        return b;
    }
};