/* Definition of a Linked List Node
class Node
{
  public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
  public:
    Node* sortedInsert(Node* head, int key) {
        Node* dummy = new Node(0);
        dummy->next = head;
        Node* cur = head;
        Node* temp = dummy;
        while(cur != NULL){
            if(temp->next->data >= key){
                temp->next = new Node(key);
                temp = temp->next;
                temp->next = cur;
                cur = cur->next;
                break;
            }
            else if(cur->next==NULL){
                cur->next = new Node(key);
                cur = cur->next;
                cur->next = NULL;
                break;
            }
            else{
                temp = temp->next;
                cur = cur->next;
            }
        }
        return dummy->next;
    }
};