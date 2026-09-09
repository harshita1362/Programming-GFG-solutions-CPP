/* 
Triplets Where One is Sum of Other Two
Given an array arr[], count the number of distinct triplets (a, b, c) such that:
a + b = c
Each triplet is counted only once, regardless of the order of a and b.
*/ 
class Solution {
public:
    int countTriplet(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int count = 0;
        for (int k = n - 1; k >= 2; k--) {
            int i = 0;
            int j = k - 1;
            while (i < j) {
                int sum = arr[i] + arr[j];
                if (sum == arr[k]) {
                    count++;
                    int leftVal = arr[i];
                    int rightVal = arr[j];
                    while (i < j && arr[i] == leftVal)
                        i++;
                    while (i < j && arr[j] == rightVal)
                        j--;
                }
                else if (sum < arr[k]) {
                    i++;
                }
                else {
                    j--;
                }
            }
            // Skip duplicate target values
            while (k >= 2 && k > 0 && arr[k] == arr[k - 1])
                k--;
        }
        return count;
    }
};