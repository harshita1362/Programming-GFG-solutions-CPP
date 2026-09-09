/*
Extract Integers from String
Given a string s consisting of lowercase letters, uppercase letters, digits, 
and special characters, extract all the integers present in the string and 
return them in the order they appear.
If no integers are present in the string, return an empty array.
*/
class Solution {
public:
    vector<string> extractInt(string &s) {
        vector<string> ans;
        string temp = "";
        for(char ch : s) {
            if(isdigit(ch)) {
                temp += ch;
            }
            else if(!temp.empty()) {
                ans.push_back(temp);
                temp = "";
            }
        }
        if(!temp.empty())
            ans.push_back(temp);
        return ans;
    }
};