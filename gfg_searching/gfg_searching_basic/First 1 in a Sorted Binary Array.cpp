/*
First 1 in a Sorted Binary Array
Given a sorted array arr consisting of 0s and 1s. 
The task is to find the index (0-based indexing) of the first 1 in the given array.
NOTE: If one is not present then, return -1.
*/
class Solution {
public:
    int firstIndex(vector<int> &arr) {
        int l = 0, r = arr.size() - 1;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(arr[mid] == 1) {
                if(mid == 0 || arr[mid - 1] == 0)
                    return mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return -1;
    }
};