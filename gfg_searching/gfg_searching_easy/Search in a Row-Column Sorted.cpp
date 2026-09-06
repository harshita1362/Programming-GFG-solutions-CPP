/*
Search in a Row-Column Sorted
Given a 2D integer matrix mat[][] of size n x m, 
where every row and column is sorted in increasing order and a number x, 
return true if the element x is present in the matrix. 
Otherwise, return false.
*/
class Solution {
public:
    bool matSearch(vector<vector<int>> &arr, int x) {
        int n = arr.size(), m = arr[0].size();
        int i = 0, j = m - 1;
        while(i < n && j >= 0) {
            if(arr[i][j] == x)
                return true;
            else if(arr[i][j] > x)
                j--;
            else
                i++;
        }
        return false;
    }
};