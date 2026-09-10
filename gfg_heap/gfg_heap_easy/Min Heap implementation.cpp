/* 
Min Heap implementation
Implement a class minHeap that supports the following operations:
push(x) – push element x into the heap
pop() – remove the top element from the heap
peek() – return top element from the heap, if empty return -1
size() - return the no of elements in the heap.

There will be a sequence of queries queries[][]. The queries are represented in numeric form:
1 x : call push(x)
2: call pop()
3: call peek()
4: call size()

The driver code will process the queries, call the corresponding functions, and print the outputs of peek(), size() operation.
You only need to implement the above four functions.
*/ 
class minHeap {
    priority_queue<int, vector<int>, greater<int>> pq;
public:
    void push(int x) {
        pq.push(x);
    }
    void pop() {
        if(!pq.empty())
            pq.pop();
    }
    int peek() {
        if(pq.empty())
            return -1;
        return pq.top();
    }
    int size() {
        return pq.size();
    }
};