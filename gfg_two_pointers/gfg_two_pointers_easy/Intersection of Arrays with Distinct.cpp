/*
Intersection of Arrays with Distinct
Given two unsorted integer arrays a[] and b[] each consisting of distinct elements, 
the task is to return the count of elements in the intersection (or common elements) of the two arrays.
Intersection of two arrays can be defined as the set containing distinct common elements between the two arrays. 
*/
class Solution {
public:
    int intersectSize(vector<int> &a, vector<int> &b) {
        unordered_set<int> s(a.begin(), a.end());
        int count = 0;
        for (int x : b) {
            if (s.find(x) != s.end()) {
                count++;
            }
        }
        return count;
    }
};