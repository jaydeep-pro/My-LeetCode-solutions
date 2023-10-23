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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp= new ListNode(-1);
        ListNode* ans = temp;

        int carry =0;

        while(l1 || l2 || carry){
            int sum = carry;
            if(l1) sum += l1->val;
            if(l2) sum += l2->val;

           int last = sum%10;
           carry = sum/10;
           temp->next = new ListNode(last);
           temp = temp->next;

           if(l1) l1= l1->next;
           if(l2) l2= l2->next;
        }
        return ans->next;
    }
};