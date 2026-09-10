/* 
Repeated Replacement of Min 2 with Sum
Given an array arr and an integer k, repeatedly remove the two smallest elements from the array 
and insert their sum back into the array.
Continue this process until every element in the array is greater than or equal to k. 
Return the minimum number of operations required.
If it is not possible to make all elements greater than or equal to k, return -1.
*/ 
class Solution {
public:
    int minOperations(vector<int>& arr, int k) {
        priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.end());
        int ans = 0;
        while(!pq.empty() && pq.top() < k) {
            if(pq.size() < 2)
                return -1;
            int a = pq.top(); pq.pop();
            int b = pq.top(); pq.pop();
            pq.push(a + b);
            ans++;
        }
        return ans;
    }
};