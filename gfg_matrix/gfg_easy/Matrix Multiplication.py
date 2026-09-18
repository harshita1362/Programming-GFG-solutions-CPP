# Matrix Multiplication
# Given two 2-dimensional NumPy arrays mat1 and mat2, find the matrix product of mat1 and mat2.
# Note: The given matrices have compatible dimensions for multiplication.

class Solution:
    def matrixMultiplication(self, mat1, mat2):
        return np.matmul(mat1, mat2)
