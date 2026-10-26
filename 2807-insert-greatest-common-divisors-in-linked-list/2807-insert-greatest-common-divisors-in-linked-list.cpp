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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* cur = head;
        while(cur != NULL && cur->next != NULL){
            ListNode* temp = cur->next;
            int v = 0;
            for(int i=1; i<=temp->val; i++){
                if(cur->val%i==0 && temp->val%i==0){
                    v = i;
                }
            }
            cur->next = new ListNode(v);
            cur->next->next = temp;
            cur = temp;
        }
        return head;
    }
};