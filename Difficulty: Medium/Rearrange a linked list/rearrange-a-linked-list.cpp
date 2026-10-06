/* Node Structure
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    void rearrangeEvenOdd(Node *head) {
        if(head==NULL || head->next==NULL){
            return;
        }
        vector<Node*> odd;
        vector<Node*> even;
        int pos = 1;
        Node* cur = head;
        while(cur != NULL){
            if(pos%2==1){
                odd.push_back(cur);
            }else{
                even.push_back(cur);
            }
            cur = cur->next;
            pos++;
        }
        for(int i=0; i<odd.size()-1; i++){
            odd[i]->next = odd[i+1];
        }
        for(int i=0; i<even.size()-1; i++){
            even[i]->next = even[i+1];
        }
        odd[odd.size()-1]->next = even[0];
        even[even.size()-1]->next = NULL;
    }
};