/* 
Check if an Array is Max Heap
Given an array arr[], determine whether it represents the level-order traversal of a valid max heap. 
Return true if it does; otherwise, return false.
*/ 
class Solution {
public:
    bool isMaxHeap(vector<int> &arr) {
        int n = arr.size();
        for(int i = 0; i < n / 2; i++) {
            int l = 2 * i + 1;
            int r = 2 * i + 2;
            if(l < n && arr[i] < arr[l])
                return false;
            if(r < n && arr[i] < arr[r])
                return false;
        }
        return true;
    }
};