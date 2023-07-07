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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*dummy = new ListNode(-1);
        dummy->next = head;

        ListNode*curr = dummy;

        while(curr && curr->next){
            if(curr->next->val == val){
                ListNode* node_to_del = curr->next;
                curr->next = curr->next->next;
                delete node_to_del ;
            }else
            curr = curr->next;
        }
        return dummy->next;
    }
};