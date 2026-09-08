/*
Transition Point in Sorted Binary
Given a sorted array, arr[] containing only 0s and 1s, 
find the transition point, i.e., the first index where 1 was observed, and before that, only 0 was observed.  
If arr does not have any 1, return -1. 
If array does not have any 0, return 0.
*/
class Solution {
public:
    int transitionPoint(vector<int> &arr) {
        int low = 0, high = arr.size() - 1;
        int ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == 1) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};