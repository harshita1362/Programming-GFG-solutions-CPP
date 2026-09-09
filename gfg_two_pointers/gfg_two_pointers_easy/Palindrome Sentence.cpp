/*
Palindrome Sentence
Given a single string s, the task is to check if it is a palindrome sentence or not.
A palindrome sentence is a sequence of characters, such as word, phrase, or series of symbols 
that reads the same backward as forward after converting all uppercase letters to lowercase 
and removing all non-alphanumeric characters (including spaces and punctuation).
*/
class Solution {
public:
    bool isPalinSent(string &s) {
        int left = 0;
        int right = s.length() - 1;
        while (left < right) {
            // Skip non-alphanumeric characters
            while (left < right && !isalnum(s[left]))
                left++;
            while (left < right && !isalnum(s[right]))
                right--;
            // Compare after converting to lowercase
            if (tolower(s[left]) != tolower(s[right]))
                return false;
            left++;
            right--;
        }
        return true;
    }
};