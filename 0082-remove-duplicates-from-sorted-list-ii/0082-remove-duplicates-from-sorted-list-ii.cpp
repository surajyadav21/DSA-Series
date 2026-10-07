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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        vector<int> arr;
        ListNode* temp = head;
        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        ListNode* dummy = new ListNode(0);
        dummy->next = NULL;
        temp = dummy;
        for(int i=0; i<arr.size(); i++){
            int cnt=0;
            for(int j=0; j<arr.size(); j++){
                if(arr[i]==arr[j]){
                    cnt++;
                }
            }
            if(cnt==1){
                temp->next = new ListNode(arr[i]);
                temp = temp->next;
            }
        }
        temp->next = NULL;
        return dummy->next;
    }
};