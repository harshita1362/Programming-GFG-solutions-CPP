/*
Insertion in Empty Circular List
Given an empty circular linked list,  inserts a new node into the empty circular linked list.
*/
/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};
*/
class Solution {
public:
    Node* insertIntoEmpty(Node* last, int data) {
        if (last != NULL)
            return last;
        Node* temp = new Node(data);
        temp->next = temp;
        return temp;
    }
};
