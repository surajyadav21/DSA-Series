/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
}; */

class Solution {
  public:
    Node* insertPos(Node* head, int pos, int val) {
        Node* dummy = new Node(0);
        dummy->next = head;
        Node* cur = head;
        if(pos==1){
            dummy->next = new Node(val);
            dummy->next->next = cur;
            return dummy->next;
        }
        for(int i=1; i<pos-1; i++){
            cur = cur->next;
        }
        Node* temp = cur->next;
        cur->next = new Node(val);
        cur->next->next = temp;
        return dummy->next;
        
    }
};