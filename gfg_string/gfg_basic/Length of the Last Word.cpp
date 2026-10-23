/*
Length of the Last Word
Given a string s consisting of upper-case and lower-case alphabets along with space characters ' ', 
return the length of the last word present in the string.
Note: The string may contain trailing spaces.
*/
class Solution {
  public:
    int lastWordLen(string &s) {
        int i = s.size() - 1;
        int count = 0;
        while (i >= 0 && s[i] == ' ') {
            i--;
        }
        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }
        return count;
    }
};
