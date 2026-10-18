/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node *insertAtFront(Node *head, int x) {
        Node* dummy = new Node(0);
        dummy->next = head;
        Node* cur = dummy;
        cur->next = new Node(x);
        cur = cur->next;
        cur->next = head;
        return dummy->next;
    }
};