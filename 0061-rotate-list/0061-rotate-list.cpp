/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        int l=0;
        ListNode* temp = head;
        while(temp != NULL){
            l++;
            temp = temp->next;
        }
        temp = head;
        ListNode* t = head;
        while(t->next != NULL){
            t = t->next;
        }
        cout<<l<<endl;
        t->next = head;
        k = k % l;
        for(int i=1; i<l-k; i++){
            cout<<temp->val;
            temp = temp->next;
        }

        head = temp->next;
        temp->next = NULL;
        return head;
    }
};