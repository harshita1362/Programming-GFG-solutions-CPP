/*
Reverse Order of Rows of a Matrix
Given a matrix  mat[][] of size n × m, reverse the order of its rows in-place. 
After the operation, the first row should become the last row, the second row should become the second last row, and so on.
*/

class Solution {
public:
    void interchangeRows(vector<vector<int>> &mat) {
        int n = mat.size();
        int top = 0, bottom = n - 1;
        while (top < bottom) {
            swap(mat[top], mat[bottom]);
            top++;
            bottom--;
        }
    }
};
