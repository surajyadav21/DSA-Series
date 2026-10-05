/* Node Structure
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
    void reorderList(Node* head) {
        vector<Node*> arr;
        Node* temp = head;
        while(temp != NULL){
            arr.push_back(temp);
            temp = temp->next;
        }
        int l=0, r=arr.size()-1;
        while(l<r){
            arr[l]->next = arr[r];
            l++;
            if(l==r) break;
            arr[r]->next = arr[l];
            r--;
        }
        arr[l]->next = NULL;
    }
};