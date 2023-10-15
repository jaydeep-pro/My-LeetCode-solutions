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
        ListNode*curr = head;
        ListNode*next = NULL;
        if(curr && curr->next) next = curr->next;
        else return head;

        while(next){
            if(curr->val == next->val){
                curr->next = next->next;
                if(curr && curr->next)next = curr->next;
                else break;
            }
            else{
            curr = curr->next;
            next = next->next;}
        }
    return head;
    }
};