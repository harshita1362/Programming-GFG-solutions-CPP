/*
Extra in One of the Two Arrays
You have given two sorted arrays a[] & b[] of distinct elements. 
The first array has one element extra added in between. 
Return the index of the extra element.
Note: 0-based indexing is followed.
*/
class Solution {
public:
    int findExtra(vector<int> &a, vector<int> &b) {
        int l = 0, r = b.size();
        while(l < r) {
            int mid = l + (r - l) / 2;
            if(a[mid] == b[mid])
                l = mid + 1;
            else
                r = mid;
        }
        return l;
    }
};