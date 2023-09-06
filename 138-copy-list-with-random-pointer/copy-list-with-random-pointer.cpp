/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
    
      Node*temp = head;
      while(temp){
          Node* next = temp->next;
          temp->next = new Node(temp->val);
          temp = temp->next;
          temp->next = next;

          temp = temp->next;
      }
      temp = head;
      while(temp && temp->next){
          if(temp->random)
          temp->next->random = temp->random->next;
          temp = temp->next;
          if(temp->next) temp= temp->next;
      }
      Node* ans = new Node(0);
      Node* helper = ans;
      temp = head;
      while(temp){
         helper->next = temp->next;
         helper = helper->next;
         if(temp->next)
         temp->next = temp->next->next;
         temp = temp->next;
      }
      return ans->next;
    }
};