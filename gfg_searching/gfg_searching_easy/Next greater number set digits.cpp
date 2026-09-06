/*
Doubling the value
Given a number n, find the smallest number that has the same set of digits as n and is greater than n. 
If n is the greatest possible number with its set of digits, report it.
*/
class Solution {
public:
    int findNext(int N) {
        string s=to_string(N);
        int i=s.size()-2;
        while(i>=0&&s[i]>=s[i+1])i--;
        if(i<0)return -1;
        int j=s.size()-1;
        while(s[j]<=s[i])j--;
        swap(s[i],s[j]);
        reverse(s.begin()+i+1,s.end());
        return stoi(s);
    }
};