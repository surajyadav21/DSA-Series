/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = nullptr;
    }
};*/

class Solution {
  public:
    bool isPalindrome(Node *head) {
        Node* temp = head;
        vector<int> v;
        while(temp != NULL){
            v.push_back(temp->data);
            temp = temp->next;
        }
        int l=0, r=v.size()-1;
        while(l<r){
            if(v[l] != v[r]){
                return false;
            }else{
                l++; r--;
            }
        }
        return true;
    }
};