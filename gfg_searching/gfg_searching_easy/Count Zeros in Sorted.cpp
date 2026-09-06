/*
Count Zeros in Sorted
Given an array arr of only 0's and 1's. 
The array is sorted in such a manner that all the 1's are placed first 
and then they are followed by all the 0's. 
Find the count of all the 0's.
*/
class Solution {
public:
    int countZeroes(vector<int> &arr) {
        int l = 0, r = arr.size() - 1;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(arr[mid] == 1)
                l = mid + 1;
            else
                r = mid - 1;
        }
        return arr.size() - l;
    }
};