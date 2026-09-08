/*
Common in 3 Sorted Arrays
Given three sorted arrays in non-decreasing order, 
return all common elements in non-decreasing order across these arrays. 
If there are no such elements return an empty array.
Note: Ignore duplicates, include each common element only once in the output.
*/
class Solution {
public:
    vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c) {
        vector<int> ans;
        int i = 0, j = 0, k = 0;
        while (i < a.size() && j < b.size() && k < c.size()) {
            if (a[i] == b[j] && b[j] == c[k]) {
                if (ans.empty() || ans.back() != a[i])
                    ans.push_back(a[i]);
                int x = a[i];
                while (i < a.size() && a[i] == x) i++;
                while (j < b.size() && b[j] == x) j++;
                while (k < c.size() && c[k] == x) k++;
            }
            else if (a[i] < b[j])
                i++;
            else if (b[j] < c[k])
                j++;
            else
                k++;
        }
        return ans;
    }
};