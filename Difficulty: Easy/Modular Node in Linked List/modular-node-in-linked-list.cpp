/* Linked List Node Structure
class Node {
    public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    int modularNode(Node *head, int k) {
        int ans = -1;
        int n = 0;
        Node* temp = head;
        while(temp != NULL){
            n++;
            temp = temp->next;
        }
        temp = head;
        for(int pos=1; pos<=n; pos++){
            if(pos%k == 0){
                ans = temp->data;
            }
            temp = temp->next;
        }
        return ans;
    }
};