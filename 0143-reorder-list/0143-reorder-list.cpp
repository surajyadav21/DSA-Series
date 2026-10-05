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
    void reorderList(ListNode* head) {
        ListNode* temp = head;
        vector<ListNode*> ar;
        while(temp != NULL){
            ar.push_back(temp);
            temp = temp->next;
        }
        int l=0, r=ar.size()-1;
        while(l<r){
            ar[l]->next = ar[r];
            l++;
            if(l==r){
                break;
            }
            ar[r]->next = ar[l];
            r--;
        }
        ar[l]->next = NULL;
    }
};