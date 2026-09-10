/* 
Sum between k1'th and k2'th smallest
Given an array arr[] of positive integers and two integers k1 and k2, 
find the sum of all array elements whose values lie between 
the k1-th smallest and the k2-th smallest (both k1th and k2th smallest are not included) 
of the array.
*/ 
class Solution {
public:
    long long sumBetweenK1K2(vector<int>& arr, int k1, int k2) {
        priority_queue<int> pq;
        long long sumK1 = 0, sumK2 = 0;
        for(int x : arr) {
            pq.push(x);
            sumK2 += x;
            if(pq.size() > k2) {
                sumK2 -= pq.top();
                pq.pop();
            }
        }
        while(pq.size() > k1) {
            pq.pop();
        }
        priority_queue<int> q;
        for(int i = 0; i < arr.size(); i++) {
            q.push(arr[i]);
            if(q.size() > k1) {
                q.pop();
            }
        }
        while(!q.empty()) {
            sumK1 += q.top();
            q.pop();
        }
        // Remove the k2-th smallest element
        int k2th = 0;
        pq = priority_queue<int>();
        for(int x : arr) {
            pq.push(x);
            if(pq.size() > k2)
                pq.pop();
        }
        k2th = pq.top();
        return sumK2 - sumK1 - k2th;
    }
};