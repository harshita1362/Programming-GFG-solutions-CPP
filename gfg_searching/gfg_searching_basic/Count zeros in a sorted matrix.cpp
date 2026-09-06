/*
Count zeros in a sorted matrix
Given a n * n binary Square Matrix 
where each row and column of the matrix is sorted in ascending order. 
Find the total number of zeros present in the matrix.
*/
class Solution {
public:
    int countZeros(vector<vector<int>>& mat) {
        int n = mat.size();
        int i = 0, j = n - 1, ans = 0;
        while(i < n && j >= 0) {
            if(mat[i][j] == 0) {
                ans += j + 1;
                i++;
            } else {
                j--;
            }
        }
        return ans;
    }
};