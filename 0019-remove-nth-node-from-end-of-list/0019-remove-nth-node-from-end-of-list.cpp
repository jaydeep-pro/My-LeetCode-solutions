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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return nullptr;

       ListNode* dummy = new ListNode(-1);
       dummy->next = head;

        ListNode*slow = dummy;
        ListNode*fast = dummy;
         
        int count =0;
        while(count!= n){
            fast= fast->next;
            count++;
        }

        while(fast->next != NULL){
            fast = fast->next;
            slow= slow->next;
        }
        ListNode* del = slow->next;

        slow->next = slow->next->next;
        
        delete del;

        return dummy->next;
    }
};