/*
Value Equal to Position
Given an array arr[], find the elements whose value is equal to the position where they appear.
Note: There can be more than one element in the array which have the same value as its position.
You need to include the position of every such element.
*/
class Solution {
public:
    vector<int> valEqualToPos(vector<int>& arr) {
        vector<int> ans;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] == i + 1)
                ans.push_back(i + 1);
        }
        return ans;
    }
};