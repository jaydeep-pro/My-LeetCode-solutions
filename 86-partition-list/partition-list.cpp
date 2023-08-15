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
    ListNode* partition(ListNode* head, int x) {
        ListNode*temp = head;
        vector<int>gt , lo;
        while(temp){
           if(temp->val < x){
               lo.push_back(temp->val);
           }else{
               gt.push_back(temp->val);
           }
           temp = temp->next;
        }
        lo.insert(lo.end(), gt.begin(), gt.end());

        temp = head;
        int i=0;
        while(temp){
            temp->val = lo[i++];
            temp = temp->next;
        }
        return head;
    }
};