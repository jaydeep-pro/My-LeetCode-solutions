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
        vector<int>v;
        while(head){
            v.push_back(head->val);
            head= head->next;
        }
        left--;
        right--;
        while(left < right) swap(v[left++], v[right--]);

        ListNode* ans = new ListNode(0);
        ListNode*dummy = ans;
        for(int i=0;i<v.size();i++){
            dummy->next = new ListNode(v[i]);
            dummy = dummy->next;
        }
        return ans->next;
    }
};