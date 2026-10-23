/*
Longest Substring with All 1's
Given a binary string s. Return the length of the longest substring containing only ‘1’.
*/

class Solution {
  public:
    int longestSubstring(string &s) {
        // code here
        int count = 0, maxi = 0;
        for (char c : s) {
            if (c == '1') {
                count++;
                maxi = max(maxi, count);
            } 
            else {
                count = 0;
            }
        }
        return maxi;
    }
};
