/*
Bitonic Point
Given an array of integers arr[] that is first strictly increasing and then maybe strictly decreasing, 
find the bitonic point, that is the maximum element in the array.
Bitonic Point is a point before which elements are strictly increasing and after which elements are strictly decreasing.
Note: It is guaranteed that the array contains exactly one bitonic point.
*/
class Solution {
public:
    int findMaximum(vector<int> &arr) {
        int n = arr.size();
        int l = 0, r = n - 1;
        while(l < r) {
            int mid = l + (r - l) / 2;
            if(arr[mid] < arr[mid + 1])
                l = mid + 1;
            else
                r = mid;
        }
        return arr[l];
    }
};