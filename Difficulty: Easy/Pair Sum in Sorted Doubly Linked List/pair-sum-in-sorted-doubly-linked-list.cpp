/* Structure of Doubly Linked List Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
}; */

class Solution {
  public:
    vector<vector<int>> givenSumPairs(Node* head, int target) {
        vector<vector<int>> res;
        if(head==NULL || head->next==NULL){
            return res;
        }
        Node* temp1 = head;
        Node* temp2 = head;
        while(temp2->next != NULL){
            temp2 = temp2->next;
        }
        while(temp1 != temp2 && temp1->prev != temp2){
            int sum = temp1->data + temp2->data;
            if(sum == target){
                res.push_back({temp1->data,temp2->data});
                temp1 = temp1->next;
                temp2 = temp2->prev;
            }
            else if(sum < target){
                temp1 = temp1->next;
            }
            else{
                temp2 = temp2->prev;
            }
        }
        return res;
    }
};