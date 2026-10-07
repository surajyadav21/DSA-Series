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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* temp = head;
        int n=0;
        while(temp != NULL){
            n++;
            temp = temp->next;
        }
        temp = head;
        vector<int> ans(n,0);
        int i=0;
        while(temp != NULL){
            ListNode* p = temp->next;
            while(p!=NULL){
                if(temp->val < p->val){
                    ans[i]=p->val;
                
                    break;
                }else{
                    p = p->next;
                }
            }
            temp = temp->next;
            i++;
        }
        return ans;
    }
};