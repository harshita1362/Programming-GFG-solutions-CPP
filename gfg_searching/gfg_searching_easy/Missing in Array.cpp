/*
Missing in Array
You are given an array arr[] of size n - 1 that contains distinct integers in the range from 1 to n (inclusive).
This array represents a permutation of the integers from 1 to n with one element missing. 
Your task is to identify and return the missing element.
*/
class Solution {
public:
    int missingNum(vector<int> &arr) {
        int n = arr.size() + 1;
        int ans = 0;
        for(int i = 1; i <= n; i++)
            ans ^= i;
        for(int x : arr)
            ans ^= x;
        return ans;
    }
};