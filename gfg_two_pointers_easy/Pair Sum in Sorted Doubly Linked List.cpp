/*
Pair Sum in Sorted Doubly Linked List
Given a sorted doubly linked list containing distinct positive integers and 
an integer target, find all pairs of nodes whose values add up to target.
*/
/* Structure of Doubly Linked List Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
}; */

class Solution {
public:
    vector<vector<int>> givenSumPairs(Node* head, int target) {
        vector<vector<int>> ans;
        if (head == nullptr)
            return ans;
        Node* left = head;
        Node* right = head;
        // Find the last node
        while (right->next != nullptr) {
            right = right->next;
        }
        // Two pointers
        while (left != right && left->prev != right) {
            int sum = left->data + right->data;
            if (sum == target) {
                ans.push_back({left->data, right->data});
                left = left->next;
                right = right->prev;
            }
            else if (sum < target) {
                left = left->next;
            }
            else {
                right = right->prev;
            }
        }
        return ans;
    }
};