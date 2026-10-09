/* Structure of a Linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        Node* dummy = new Node(0);
        dummy->next = NULL;
        Node* cur = dummy;
        while(head1!=NULL && head2!=NULL){
            if(head1->data == head2->data){
                int val = head1->data;
                cur->next = new Node(val);
                cur = cur->next;
                head1 = head1->next;
                head2 = head2->next;
            }
            else if(head1->data < head2->data){
                head1 = head1->next;
            }
            else{
                head2 = head2->next;
            }
        }
        cur->next = NULL;
        return dummy->next;
    }
};