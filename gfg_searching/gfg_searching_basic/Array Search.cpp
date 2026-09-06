/*
Array Search
Given an array, arr[] of n integers, and an integer element x, find whether element x is present in the array. 
Return the index of the first occurrence of x in the array, or -1 if it doesn't exist.
*/
class Solution {
  public:
    int search(int arr[], int n, int x) {
        for(int i=0;i<n;i++){
            if(arr[i] == x){
                return i;
            }
        }
        return -1;
    }
};