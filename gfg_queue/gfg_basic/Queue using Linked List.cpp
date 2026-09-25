/* 
Queue using Linked List
Implement a Queue using a Linked List, this queue has no fixed capacity and can grow dynamically until memory is available.
The Queue must support the following operations:
(i) enqueue(x): Insert an element x at the rear of the queue.
(ii) dequeue(): Remove the front element from the queue. If the queue is empty, do nothing.
(iii) getFront(): Return front element if not empty, else -1.
(iv) isEmpty(): Return true if the queue is empty else return false.
(v) size(): Return the number of elements currently in the queue.
There will be a sequence of queries queries[][]. The queries are represented in numeric form:
1 x : Call enqueue(x)
2: Call dequeue()
3: Call getFront()
4: Call isEmpty()
5: Call size()
You just have to implement the functions enqueue, dequeue, getFront,  isEmpty and size. 
The driver code will handle the input and output.
*/
class Node {
	public:
	int data;
	Node* next;
	
	Node(int val) {
		data = val;
		next = nullptr;
	}
};

class myQueue {
	
	Node *front, *rear;
	int count;
	public:
	
	myQueue() {
		front = rear = nullptr;
		count = 0;
	}
	
	bool isEmpty() {
		return front == nullptr;
	}
	
	void enqueue(int x) {
		Node* temp = new Node(x);
		if (rear == nullptr) {
			front = rear = temp;
		} else {
			rear->next = temp;
			rear = temp;
		}
		count++;
	}
	
	void dequeue() {
		if (front == nullptr)
			return;
		Node* temp = front;
		front = front->next;
		if (front == nullptr)
			rear = nullptr;
		delete temp;
		count--;
	}
	
	int getFront() {
		if (front == nullptr)
			return - 1;
		return front->data;
	}
	
	int size() {
		return count;
	}
};
