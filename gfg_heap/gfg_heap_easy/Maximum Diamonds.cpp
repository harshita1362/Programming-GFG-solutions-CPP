/* 
Maximum Diamonds
There are  bags with diamonds in them. The i'th of these bags contains arr[i] diamonds. 
If you drop a bag with arr[i] diamonds, it changes to arr[i]/2 diamonds and you gain arr[i] diamonds. 
Dropping a bag takes 1 minute. Find the maximum number of diamonds that you can take if you are given k minutes.
*/ 
class Solution {
public:
    long long maxDiamonds(vector<int>& arr, int k) {
        priority_queue<int> pq;
        for(int x : arr)
            pq.push(x);
        long long ans = 0;
        while(k--) {
            int x = pq.top();
            pq.pop();
            ans += x;
            pq.push(x / 2);
        }
        return ans;
    }
};