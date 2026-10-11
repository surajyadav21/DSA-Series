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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> v;
        ListNode* cur = head;
        while(cur != NULL){
            v.push_back(cur->val);
            cur = cur->next;
        }
        int i=left-1, j=right-1;
        while(i<j){
            swap(v[i],v[j]);
            i++; j--;
        }
        ListNode* dummy = new ListNode(0);
        dummy->next = NULL;
        cur = dummy;
        for(int i=0; i<v.size(); i++){
            cur->next = new ListNode(v[i]);
            cur = cur->next;
        }
        cur->next = NULL;
        return dummy->next;
    }
};