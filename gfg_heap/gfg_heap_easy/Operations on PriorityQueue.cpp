/* 
Operations on PriorityQueue
Given an integer array a[], your task is to add these elements to the PriorityQueue. 
Also, given an array b[], the task is to check if the given element is present in the PriorityQueue or not.
If the element is present, then 1 is printed by the driver code, 
after that the max element of priority queue is printed. Then the driver code deletes the max element.
Note: Here the driver code has implemented the PriorityQueue as a max-heap.
*/ 
class Solution {
public:
    static void insert(priority_queue<int>& q, int k) {
        q.push(k);
    }
    static bool find(priority_queue<int>& q, int k) {
        priority_queue<int> temp = q;
        while(!temp.empty()) {
            if(temp.top() == k)
                return true;
            temp.pop();
        }
        return false;
    }
    static int deleteValue(priority_queue<int>& q) {
        if(q.empty())
            return -1;
        int x = q.top();
        q.pop();
        return x;
    }
};