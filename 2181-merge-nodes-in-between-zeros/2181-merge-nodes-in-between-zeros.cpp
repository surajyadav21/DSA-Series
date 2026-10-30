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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* cur = head;
        ListNode* dummy = new ListNode(0);
        dummy->next = NULL;
        ListNode* p = dummy;
        while(cur!=NULL && cur->next!=NULL){
            ListNode* temp = cur->next;
            int sum = 0;
            while(temp->val != 0){
                sum += temp->val;
                temp = temp->next;
            }
            p->next = new ListNode(sum);
            p = p->next;
            cur = temp;
        }
        return dummy->next;
    }
};