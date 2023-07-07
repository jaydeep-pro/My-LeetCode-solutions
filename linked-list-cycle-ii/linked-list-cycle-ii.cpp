/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*fast = head;
        ListNode* slow = head;
        bool flag = false;

        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;

            if(fast == slow){
                flag = true;
                break;
            }
        }
        if(flag){
            slow = head;
            while(slow != fast){
                fast = fast->next;
                slow = slow->next;
            }
            return slow;

        }else return nullptr;
    }
};