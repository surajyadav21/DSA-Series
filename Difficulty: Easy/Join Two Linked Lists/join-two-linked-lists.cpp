/* Structure of linked list Node
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
    Node* joinLists(Node* head1, Node* head2) {
        Node* cur = head1;
        while(cur->next!=NULL){
            cur = cur->next;
        }
        cur->next = head2;
        return head1;
    }
};