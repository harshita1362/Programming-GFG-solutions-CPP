/*
Roof Top
Given and array arr[] representing the heights of n consecutive buildings. 
You can move from the roof of a building to the roof of the next adjacent building. 
You need to find the maximum number of consecutive steps you can put forward such that every step is to a higher building than the previous one. 
*/
class Solution {
public:
    int maxStep(vector<int> &arr) {
        int ans = 0, cnt = 0;
        for(int i = 1; i < arr.size(); i++) {
            if(arr[i] > arr[i - 1])
                cnt++;
            else
                cnt = 0;
            ans = max(ans, cnt);
        }
        return ans;
    }
};