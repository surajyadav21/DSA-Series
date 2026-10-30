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
        ListNode* dummy = new ListNode(0);
        dummy->next = NULL;
        ListNode* p = dummy;
        head = head->next;
        int sum = 0;
        while(head != NULL){
            if(head->val != 0){
                sum += head->val;
            }
            else{
                p->next = new ListNode(sum);
                p = p->next;
                sum = 0;
            }
            head = head->next;
        }
        p->next = NULL;
        return dummy->next;
    }
};