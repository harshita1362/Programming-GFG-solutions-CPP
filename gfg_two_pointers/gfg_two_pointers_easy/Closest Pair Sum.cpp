/*
Closest Pair Sum
Given an array arr[] and a number target, find a pair of elements (a, b) in arr[], 
where a ≤ b whose sum is closest to target.
Note: Return the pair in sorted order 
and if there are multiple such pairs return the pair with maximum absolute difference. 
If no such pair exists return an empty array.
*/
class Solution {
public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        if (arr.size() < 2)
            return {};
        sort(arr.begin(), arr.end());
        int left = 0;
        int right = arr.size() - 1;
        long long bestDiff = LLONG_MAX;
        long long bestAbsDiff = -1;
        int bestLeft = 0;
        int bestRight = 0;
        while (left < right) {
            long long sum = (long long)arr[left] + arr[right];
            long long diff = abs(sum - target);
            long long absDiff = arr[right] - arr[left];
            if (diff < bestDiff ||
                (diff == bestDiff && absDiff > bestAbsDiff)) {
                bestDiff = diff;
                bestAbsDiff = absDiff;
                bestLeft = arr[left];
                bestRight = arr[right];
            }
            if (sum < target)
                left++;
            else if (sum > target)
                right--;
            else {
                // Exact target found.
                // Continue because another exact pair may
                // have a larger absolute difference.
                left++;
                right--;
            }
        }
        return {bestLeft, bestRight};
    }
};