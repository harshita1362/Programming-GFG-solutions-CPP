/*
Elements in the Range
Given an array arr[] containing distinct positive integers, and two integers start and end defining a range. 
Determine if the array contains all elements within inclusive range [start, end].
Note: If the array contains all elements in the given range return true otherwise return false.
*/
class Solution {
public:
    bool checkElements(int start, int end, vector<int>& arr) {
        unordered_set<int> s(arr.begin(), arr.end());
        for(int i = start; i <= end; i++) {
            if(s.find(i) == s.end())
                return false;
        }
        return true;
    }
};