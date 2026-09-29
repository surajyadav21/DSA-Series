/* Structure of Linked List Node
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = nullptr ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        Node* temp = head;
        vector<int> v;
        while(temp != NULL){
            v.push_back(temp->data);
            temp = temp->next;
        }
        temp = head;
        for(int i=v.size()-1; i>=0; i--){
            temp->data = v[i];
            temp = temp->next;
        }
        return head;
    }
};