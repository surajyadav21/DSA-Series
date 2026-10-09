/* Linked List Node Structure
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeLastNode(Node* head) {
        if(head==NULL || head->next==NULL){
            delete head;
            return NULL;
        }
        Node* cur = head;
        while(cur->next->next != NULL){
            cur = cur->next;
        }
        Node* p = cur;
        p = p->next;
        cur->next = NULL;
        delete(p);
        return head;
    }
};