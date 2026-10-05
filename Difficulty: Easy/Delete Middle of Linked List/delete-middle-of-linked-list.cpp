/* Node Structure
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    Node* deleteMid(Node* head) {
        if (head == NULL || head->next == NULL) {
            return NULL;
        }
        Node* temp = head;
        int cnt = 0;
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }
        int mid = cnt/2 + 1;
        temp = head;
        for(int i=1; i<mid-1; i++){
            temp = temp->next;
        }
        Node* t = temp->next;
        temp->next = t->next;
        delete t;
        
        return head;
    }
};