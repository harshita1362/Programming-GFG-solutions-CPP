/*
Repeated Removal of Kth
Given two integers n and k, consider the integers from 1 to n. 
In each operation, keep every kth remaining integer and remove all others. 
Repeat this process until the number of remaining integers becomes less than k. 
Return the smallest integer among the remaining integers.
*/
class Solution {
public:
    int getCandidate(int n, int k) {
        int ans = 1;
        while(n >= k) {
            n = n / k;
            ans *= k;
        }
        return ans;
    }
};