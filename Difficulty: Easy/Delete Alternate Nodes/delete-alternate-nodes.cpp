/* Structure of Linked List Node
class Node
{
    int data;
    Node *next;

    Node(int x){
        int data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    void deleteAlt(Node *head) {
        Node* temp = head;
        while(temp!=NULL && temp->next!=NULL){
            temp->next = temp->next->next;
            temp = temp->next;
        }
    }
};