/*
Last Index of Character
Given a string s of size n and a character c, find the last index (0-based indexing) of c in s. 
If the character is not present, return -1. Both s and c contain only lowercase and uppercase English alphabets.
*/
class Solution {
  public:
    int lastIndex(string &s, char c) {
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == c) {
                return i;
            }
        }
        return -1;
    }
};
