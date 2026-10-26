/* Node is defined as
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
    Node* segregate(Node* head) {
        Node* cur = head;
        vector<int> v;
        while(cur != NULL){
            v.push_back(cur->data);
            cur = cur->next;
        }
        sort(v.begin(), v.end());
        Node* dummy = new Node(0);
        dummy->next = NULL;
        cur = dummy;
        for(int i=0; i<v.size(); i++){
            cur->next = new Node(v[i]);
            cur = cur->next;
        }
        cur->next = NULL;
        return dummy->next;
    }
};