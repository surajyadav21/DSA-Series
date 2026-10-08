/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
}; */
class Solution {
  public:
    Node* divide(Node* head) {
        vector<int> arr;
        int l=0;
        Node* temp = head;
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp = temp->next;
        }
        Node* dummy = new Node(0);
        dummy->next = NULL;
        Node* cur = dummy;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]%2==0){
                cur->next = new Node(arr[i]);
                cur = cur->next;
            }
        }
        for(int i=0; i<arr.size(); i++){
            if(arr[i]%2!=0){
                cur->next = new Node(arr[i]);
                cur = cur->next;
            }
        }
        cur->next = NULL;
        return dummy->next;
    }
};