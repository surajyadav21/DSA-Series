/* Linked List Node Structure
class Node {
public:
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node* arrayToList(vector<int>& arr) {
        Node* dummy = new Node(0);
        dummy->next = NULL;
        Node* cur = dummy;
        for(int i=0; i<arr.size(); i++){
            cur->next = new Node(arr[i]);
            cur = cur->next;
        }
        cur->next = NULL;
        return dummy->next;
    }
};