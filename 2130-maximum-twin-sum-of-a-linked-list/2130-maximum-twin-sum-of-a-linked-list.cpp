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
    int pairSum(ListNode* head) {
        vector<int> v;
        ListNode* cur = head;
        while(cur != NULL){
            v.push_back(cur->val);
            cur = cur->next;
        }
        int l=0, r=v.size()-1;
        int maxi = 0;
        while(l<r){
            int sum = v[l] + v[r];
            maxi = max(maxi, sum);
            l++; r--;
        }
        return maxi;
    }
};