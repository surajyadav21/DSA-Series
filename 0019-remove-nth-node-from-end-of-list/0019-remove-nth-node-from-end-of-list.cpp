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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL){
            return NULL;
        }
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* p = dummy;
        ListNode* q = dummy;
        for(int i=0; i<=n; i++){
            q = q->next;
        }
        while(q!=NULL){
            q = q->next;
            p = p->next;
        }
        p->next = p->next->next;
        return dummy->next;
    }
};