/*
Search in a Matrix
Given a 2D integer array mat[][] of n rows and m columns and a number x, 
find whether element x is present in the matrix or not.
*/
class Solution {
public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==x) return true;
            }
        }
        return false;
    }
};