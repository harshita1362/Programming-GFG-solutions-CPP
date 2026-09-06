/*
Search in a K-Step Array
Given a step array arr[], a step value k, and an integer x, 
find the first index of x in the array. 
If x is not present, return -1.
Note: A K-Step array is an array 
where the absolute difference between any two adjacent elements is at most k.
For example, arr[]= [4, 6, 7, 9]  with k= 2 is a step array because the difference between consecutive elements is ≤ 2. 
*/
class Solution {
  public:
    int findStepKeyIndex(vector<int>& arr, int k, int x) {
        int i = 0;
        while(i < arr.size()) {
            if(arr[i] == x)
                return i;
            i += max(1, abs(arr[i] - x) / k);
        }
        return -1;
    }
};