/* Structure of Linked List Node
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
    int getKthFromLast(Node* head, int k) {
        Node* temp = head;
        int cnt = 0;
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }
        if(k > cnt){
            return -1;
        }
        int pos = cnt - k;
        temp = head;
        for(int i=0; i<pos; i++){
            temp = temp->next;
        }
        return temp->data;
    }
};