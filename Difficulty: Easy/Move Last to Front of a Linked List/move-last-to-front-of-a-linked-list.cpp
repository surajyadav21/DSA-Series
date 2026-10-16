/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

*/
class Solution {
  public:
    Node *moveToFront(Node *head) {
        if(head == NULL || head->next==NULL){
            return head;
        }
        Node* dummy = new Node(0);
        dummy->next = head;
        Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        dummy->next = temp->next;
        temp->next = NULL;
        dummy->next->next = head;
        return dummy->next;
    }
};