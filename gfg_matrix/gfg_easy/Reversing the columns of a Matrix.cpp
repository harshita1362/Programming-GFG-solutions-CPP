/* 
Reversing the columns of a Matrix
Given a matrix of size n x m, reverse the order of its columns in-place so that the last column becomes the first, 
the second-last becomes the second, and so on.
*/
class Solution {
public:
    void reverseCol(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0; i < n; i++) {
            int left = 0, right = m - 1;
            while (left < right) {
                swap(matrix[i][left], matrix[i][right]);
                left++;
                right--;
            }
        }
    }
};
