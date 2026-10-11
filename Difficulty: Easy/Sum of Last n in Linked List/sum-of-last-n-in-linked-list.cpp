/* Structure for link list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
  public:
    int sumofNodes(Node* head, int n) {
        Node* cur = head;
        int l=0;
        while(cur!=NULL){
            l++;
            cur = cur->next;
        }
        cur = head;
        for(int i=1; i<=l-n; i++){
            cur = cur->next;
        }
        int sum = 0;
        while(cur!=NULL){
            sum += cur->data;
            cur = cur->next;
        }
        return sum;
    }
};