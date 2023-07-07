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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1=0;
        int len2=0;
        ListNode*first = headA;
        ListNode*second = headB;

        while(first){
            len1++;
            first= first->next;
        }
        while(second){
            len2++;
            second = second->next;
        }
        first = headA;
        second = headB;

        if(len1 > len2){
              for(int i= len2;i<len1;i++) first  = first->next;
        }
        else{
            for(int i=len1;i<len2;i++) second = second->next;
        }

        while(first != second){
           if(first) first = first->next;
           if(second) second = second->next;
        }
       return first;
    }
};