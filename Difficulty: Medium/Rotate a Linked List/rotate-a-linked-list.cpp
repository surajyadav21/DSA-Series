/*
class Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        int l=0;
        Node* temp = head;
        while(temp != NULL){
            l++;
            temp = temp->next;
        }
        temp = head;
        Node* t = head;
        while(t->next != NULL){
            t = t->next;
        }
        t->next = head;
        k = l-k;
        k = k % l;
        for(int i=1; i<l-k; i++){
            temp = temp->next;
        }
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};