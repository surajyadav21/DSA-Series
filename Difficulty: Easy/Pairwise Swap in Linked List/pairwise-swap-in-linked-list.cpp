/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/
class Solution {
  public:
    Node* pairwiseSwap(Node* head) {
        Node* cur = head;
        while(cur!=NULL && cur->next!=NULL){
            swap(cur->data,cur->next->data);
            cur = cur->next->next;
        }
        return head;
    }
};