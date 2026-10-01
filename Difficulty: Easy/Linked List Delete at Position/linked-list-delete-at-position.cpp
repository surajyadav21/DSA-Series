/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        Node* dummy = new Node(0);
        dummy->next = head;
        Node* temp = dummy;
        for(int i=1; i<x; i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return dummy->next;
    }
};