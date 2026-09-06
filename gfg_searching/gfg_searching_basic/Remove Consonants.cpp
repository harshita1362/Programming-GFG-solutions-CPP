/*
Remove Consonants
Given a string s, remove all consonants and return the modified string containing only vowels.
If the string does not contain any vowels, return an empty string.
*/
class Solution {
public:
    string remConsonants(string &s) {
        string ans = "";
        for(char c : s) {
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
               c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
                ans += c;
        }
        return ans;
    }
};