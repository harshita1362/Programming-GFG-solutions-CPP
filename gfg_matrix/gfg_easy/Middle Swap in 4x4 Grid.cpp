/*
Middle Swap in 4x4 Grid
You are given a 4x4 matrix containing integers. 
Your task is to modify this matrix by swapping its middle rows and middle columns. Specifically:
- Swap the 2nd row with the 3rd row.
- Swap the 2nd column with the 3rd column.
*/
class Solution {
	public:
	void middleSwap(int arr[4][4]) {
		for (int j = 0; j < 4; j++)
			swap(arr[1][j], arr[2][j]);
		for (int i = 0; i < 4; i++)
			swap(arr[i][1], arr[i][2]);
	}
};
