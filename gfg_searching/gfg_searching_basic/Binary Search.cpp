/*
Binary Search
Given an array arr[], sorted in ascending order and an integer k. 
Return true if k is present in the array, otherwise, false.
*/
class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        return binary_search(arr.begin(),arr.end(),k);
    }
};
