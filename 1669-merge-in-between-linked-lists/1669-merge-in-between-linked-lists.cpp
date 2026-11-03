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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* cur1 = list1;
        ListNode* cur2 = list1;
        for(int i=0; i<a-1; i++){
            cur1 = cur1->next;
        }
        for(int i=0; i<b+1; i++){
            cur2 = cur2->next;
        }
        ListNode* temp = list2;
        while(temp->next != NULL){
            temp = temp->next;
        }
        cur1->next = list2;
        temp->next = cur2;
        return list1;
    }
};