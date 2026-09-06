/*
Closest Sum Pair Across Two Arrays
Given two sorted arrays arr1[] and arr2[] of size n and m and a number x, 
find the pair whose sum is closest to x and the pair has an element from each array. 
In the case of multiple closest pairs return any one of them.
Note : In the driver code, the absolute difference between the sum of the closest pair and x is printed.
*/
class Solution {
public:
    vector<int> findClosestPair(vector<int>& arr1, vector<int>& arr2, int x) {
        int i = 0, j = arr2.size() - 1;
        long long diff = LLONG_MAX;
        vector<int> ans;
        while(i < arr1.size() && j >= 0) {
            long long sum = (long long)arr1[i] + arr2[j];
            if(abs(sum - x) < diff) {
                diff = abs(sum - x);
                ans = {arr1[i], arr2[j]};
            }
            if(sum < x) i++;
            else j--;
        }
        return ans;
    }
};