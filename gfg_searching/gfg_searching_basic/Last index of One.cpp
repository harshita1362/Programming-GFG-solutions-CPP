/*
Last index of One
Given a string s consisting only of '0' and '1', find the last index at which '1' occurs. 
If '1' is not present in the string, return -1.
*/
class Solution {
  public:
    int lastIndex(string s) {
        for(int i=s.length()-1;i>=0;i--){
            if(s[i] == '1'){
                return i;
            }
        }
        return -1;
    }
};