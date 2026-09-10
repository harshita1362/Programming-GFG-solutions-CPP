/* 
Building Heap from Array
Given an integer array arr[], build a Max Heap from the given array.
A Max Heap is a complete binary tree where each parent node is greater than or equal to its children, 
ensuring the largest element is at the root.
Note: The driver code prints true if the resulting array represents a valid Max Heap; otherwise, it prints false. 
Multiple valid Max Heap arrangements are possible.
*/ 
class Solution {
public:
    void heapify(vector<int>& arr, int n, int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        if (left < n && arr[left] > arr[largest])
            largest = left;
        if (right < n && arr[right] > arr[largest])
            largest = right;
        if (largest != i) {
            swap(arr[i], arr[largest]);
            heapify(arr, n, largest);
        }
    }
    void buildHeap(vector<int>& arr) {
        int n = arr.size();
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(arr, n, i);
        }
    }
};