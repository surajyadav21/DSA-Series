/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = nullptr;
    }
};*/

class Solution {
  public:
    bool isPalindrome(Node *head) {
        Node* slow = head;
        Node* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        Node* cur = slow;
        Node* prev = NULL;
        while(cur != NULL){
            Node* t = cur->next;
            cur->next = prev;
            prev = cur;
            cur = t;
        }
        Node* p = head;
        Node* q = prev;
        while(q != NULL){
            if(p->data != q->data){
                return false;
            }
            p = p->next;
            q = q->next;
        }
        return true;
    }
};