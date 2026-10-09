/* Node Structure
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
    int getNode(Node* head, int k) {
        Node* cur = head;
        int l=0;
        while(cur != NULL){
            l++;
            cur = cur->next;
        }
        if(head==NULL || k>l){
            return -1;
        }
        cur = head;
        for(int i=1; i<k; i++){
            cur = cur->next;
        }
        return cur->data;
    }
};