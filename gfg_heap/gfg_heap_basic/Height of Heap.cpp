/*
Height of Heap
Given a Binary Heap of size n in an array arr[]. 
Write a program to calculate the height of the Heap.
Note: Return 1 if the n is 1.
*/
class Solution{
public:
    int heapHeight(int N, int arr[]){
        return log2(N);
    }
};