/* 
Pairs with 0 Sum
Given an integer array arr, return all the unique pairs [arr[i], arr[j]] such that i != j and arr[i] + arr[j] == 0.
Note: The pairs must be returned in sorted order, the solution array should also be sorted, 
and the answer must not contain any duplicate pairs.
*/
class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        int i = 0, j = arr.size() - 1;
        while(i < j) {
            int sum = arr[i] + arr[j];
            if(sum == 0) {
                ans.push_back({arr[i], arr[j]});
                int x = arr[i], y = arr[j];
                while(i < j && arr[i] == x)
                    i++;
                while(i < j && arr[j] == y)
                    j--;
            }
            else if(sum < 0)
                i++;
            else
                j--;
        }
        return ans;
    }
};
