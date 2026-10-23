/* Structure of a Linked List Node
class Node
{
public:
    int data;
    struct Node *next;
    Node(int x){
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int fractionalNode(Node *head, int k) {
        Node* temp = head;
        int n=0;
        while(temp!=NULL){
            n++;
            temp = temp->next;
        }
        temp = head;
        if(n%k==0){
            n = n/k;
        }else{
            n = n/k + 1;
        }
        for(int i=1; i<n; i++){
            temp = temp->next;
        }
        return temp->data;
    }
};