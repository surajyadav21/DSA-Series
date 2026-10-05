/* Node Structure
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    void rearrangeEvenOdd(Node *head) {
        if(head==NULL || head->next==NULL){
            return;
        }
        Node* p=head;
        Node* q=head->next;
        Node* temp = q;
        while(q!=NULL && q->next!=NULL){
            p->next = q->next;
            p = p->next;
            q->next = p->next;
            q = q->next;
        }
        p->next = temp;
    }
};